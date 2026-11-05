#!/usr/bin/env python3
"""Writes amiga/le_tables.cpp: for each structure Seven Kingdoms saves as
raw memory (amiga/tools/le_types.cpp), where its 16, 32 and 64-bit numbers
are, so that amiga/amiga_le.cpp can swap them between the files'
little-endian order and the 68k's.

The layout comes from clang's record layout dump for 32-bit x86, the
layout of the PC builds that wrote the scenarios and saved games:

  clang++ -target i386-linux-gnu -fsyntax-only \
      -Xclang -fdump-record-layouts-canonical amiga/tools/le_types.cpp \
      [the m68k toolchain's headers, -include amiga/config.h ...] > layout.txt
  python3 amiga/tools/gen_le_tables.py layout.txt > amiga/le_tables.cpp

The written file asserts, when the 68k build compiles it, that each
structure's size and each of its members' offsets are the same on the 68k
as on the PC: if they were not, swapping would not be enough.

Members it cannot swap by position are reported on stderr and left as
they are: bit fields (the bit order differs) and unions whose members
differ in size. Virtual table pointers are skipped (never read from a file).

The AmiCradle Team. GPL 2 or later, like Seven Kingdoms.
"""
import re
import sys

TYPES = """Game Info Power Weather MagicWeather Location ResultNode TeamInfo
UnitCaravan UnitExpCart UnitMonster UnitVehicle UnitGod BulletHoming
BulletFlame Worker FirmBase FirmCamp FirmFactory FirmInn FirmMarket FirmMine
FirmResearch FirmWar FirmHarbor FirmMonster Site Town Version_1_Town Rebel
ActionNode SnowGroundArray RegionInfo RegionStat News EmptyRoom HallFameEntry
TalkMsg FirmInfo TechClass TechInfo GodInfo
nsPlayerStats::detail::RecordHeader nsPlayerStats::detail::ScenStat
Unit Bullet Firm Rock FirmDie""".split()

SCALARS = {
    'char': 1, 'signed char': 1, 'unsigned char': 1, '_Bool': 1, 'bool': 1,
    'short': 2, 'unsigned short': 2,
    'int': 4, 'unsigned int': 4, 'long': 4, 'unsigned long': 4, 'float': 4,
    'long long': 8, 'unsigned long long': 8, 'double': 8,
}

LINE = re.compile(r'^\s*(\d+)(?::(\d+)-(\d+))?\s*\|(\s*)(.*)$')


def parse(path):
    """Returns {record name: (sizeof, [(depth, offset, bitfield, text)])}."""
    records = {}
    lines = open(path).read().split('\n')
    i = 0
    while i < len(lines):
        if 'Dumping AST Record Layout' not in lines[i]:
            i += 1
            continue
        i += 1
        body = []
        name = None
        size = None
        while i < len(lines):
            l = lines[i]
            m = re.search(r'\[sizeof=(\d+)', l)
            if m:
                size = int(m.group(1))
                i += 1
                break
            m = LINE.match(l)
            if m:
                depth = len(m.group(4)) // 2
                text = m.group(5).strip()
                if name is None:
                    name = re.sub(r'^(class|struct|union)\s+', '', text)
                    kind = text.split()[0]
                else:
                    body.append((depth, int(m.group(1)),
                                 m.group(2) is not None, text))
            i += 1
        if name and size is not None and name not in records:
            records[name] = (size, kind, body)
    return records


def split_decl(text):
    """'short[10][7] race_resistance_array' -> ('short', [10, 7], name)."""
    m = re.match(r'^(.*?)((?:\[\d+\])*)\s+([\w:~]+)$', text)
    if not m:
        return None
    base = m.group(1).strip()
    dims = [int(x) for x in re.findall(r'\[(\d+)\]', m.group(2))]
    return base, dims, m.group(3)


class Gen:
    def __init__(self, records):
        self.records = records
        self.problems = []
        self.cache = {}
        self.used = set()

    def scalar_size(self, base):
        if base.endswith('*') or base.endswith('&'):
            return 4
        if base.startswith('enum '):
            return 4
        if base in SCALARS:
            return SCALARS[base]
        return None

    def fields(self, rec, where):
        """Flat [(offset, size)] of the swappable numbers in a record."""
        if rec in self.cache:
            return self.cache[rec]
        self.used.add(rec)
        size, kind, body = self.records[rec]
        out = []
        n = 0
        while n < len(body):
            depth, off, bitf, text = body[n]
            if depth != 1:
                n += 1
                continue
            # the lines nested under this one
            j = n + 1
            while j < len(body) and body[j][0] > depth:
                j += 1
            if text.startswith('(') and 'vtable pointer' in text:
                n = j
                continue
            if bitf:
                self.problems.append('%s: bit field %s (left as it is)' % (where, text))
                n = j
                continue
            m = re.match(r'^(class|struct|union)\s+(.*?)\s*(\((?:primary )?(?:virtual )?base\)|\(empty\))?$', text)
            if m and (m.group(3) or j > n + 1 or text.endswith('(empty)')):
                # a base class or a member record: its own layout, moved
                sub = m.group(2)
                decl = None
                if not m.group(3):
                    decl = split_decl(text)
                    if decl:
                        sub = re.sub(r'^(class|struct|union)\s+', '', decl[0])
                if m.group(1) == 'union' or (decl and decl[0].startswith('union')):
                    out += self.union_fields(sub, off, '%s.%s' % (where, text))
                elif sub in self.records:
                    out += [(off + o, s) for o, s in self.fields(sub, where + '.' + sub)]
                n = j
                continue
            decl = split_decl(text)
            if not decl:
                self.problems.append('%s: cannot read %r' % (where, text))
                n = j
                continue
            base, dims, name = decl
            count = 1
            for d in dims:
                count *= d
            s = self.scalar_size(base)
            if s is not None:
                if s > 1:
                    out += [(off + k * s, s) for k in range(count)]
            else:
                sub = re.sub(r'^(class|struct|union)\s+', '', base)
                if base.startswith('union'):
                    for k in range(count):
                        out += self.union_fields(sub, off + k * self.records[sub][0], where + '.' + name)
                elif sub in self.records:
                    esize = self.records[sub][0]
                    ef = self.fields(sub, where + '.' + name)
                    for k in range(count):
                        out += [(off + k * esize + o, s2) for o, s2 in ef]
                elif base == 'long double':
                    self.problems.append('%s: long double %s (formats differ)' % (where, name))
                else:
                    self.problems.append('%s: unknown type %r of %s' % (where, base, name))
            n = j
        self.cache[rec] = out
        return out

    def union_fields(self, rec, off, where):
        if rec not in self.records:
            self.problems.append('%s: union %s not laid out' % (where, rec))
            return []
        fl = self.fields(rec, where)
        # members of a union overlap: fine only if all start at 0 and
        # have one size
        sizes = set(s for o, s in fl)
        if len(sizes) > 1 or len(set(o for o, s in fl)) > 1:
            self.problems.append('%s: union with members of different sizes (left as it is)' % where)
            return []
        return [(off + o, s) for o, s in fl[:1]]


def runs(fields):
    """[(off, size, count)] with neighbours of one size merged."""
    fields = sorted(set(fields))
    out = []
    for off, size in fields:
        if out and out[-1][1] == size and out[-1][0] + out[-1][1] * out[-1][2] == off:
            out[-1][2] += 1
        else:
            out.append([off, size, 1])
    return out


def top_members(records, rec):
    """Named members of the record itself and of its bases, with offsets,
    for the 68k's offsetof() checks."""
    size, kind, body = records[rec]
    out = []
    for depth, off, bitf, text in body:
        if bitf or text.startswith('('):
            continue
        if re.search(r'\((primary )?(virtual )?base\)$', text) or text.endswith('(empty)'):
            continue
        d = split_decl(text)
        if not d:
            continue
        # direct members (depth 1) and the members of base classes
        # (depth 2 under a base line) can be named from rec
        out.append((depth, off, d[2]))
    # keep depth-1 members, and depth-2 ones that sit right under a base
    named = []
    base_depth = None
    for (depth, off, bitf, text) in body:
        if re.search(r'\((primary )?(virtual )?base\)$', text):
            base_depth = depth
            continue
        if base_depth is not None and depth <= base_depth:
            base_depth = None
        if bitf or text.startswith('('):
            continue
        d = split_decl(text)
        if not d or re.match(r'^(class|struct|union)\s', text) and not d:
            continue
        if depth == 1 or (base_depth is not None and depth == base_depth + 1):
            named.append((off, d[2]))
    return named


def main():
    records = parse(sys.argv[1])
    gen = Gen(records)
    w = sys.stdout.write
    w('/* Written by amiga/tools/gen_le_tables.py from clang\'s layout of\n'
      ' * amiga/tools/le_types.cpp for 32-bit x86: where the numbers are in\n'
      ' * the structures the game keeps as raw memory in its files. Do not\n'
      ' * edit; run the tool again when a structure changes. */\n')
    w('#include <stddef.h>\n#include <amiga_le.h>\n')
    w('#pragma GCC diagnostic ignored "-Winvalid-offsetof"\n')
    w('#define LE_TABLES_FROM_TOOL\n#include "tools/le_types.cpp"\n\n')
    for t in TYPES:
        if t not in records:
            sys.stderr.write('not laid out: %s\n' % t)
            sys.exit(1)
        size = records[t][0]
        rs = runs(gen.fields(t, t))
        cname = t.split('::')[-1]
        w('// %s: %d bytes on the PC\n' % (t, size))
        w('static_assert(sizeof(%s) == %d, "%s is laid out differently on the 68k");\n' % (t, size, cname))
        for off, name in top_members(records, t):
            w('static_assert(offsetof(%s, %s) == %d, "%s::%s moved on the 68k");\n' % (t, name, off, cname, name))
        w('static const LeRun le_runs_%s[] = {\n' % cname)
        for off, s, c in rs:
            w('\t{ %d, %d, %d },\n' % (off, s, c))
        if not rs:
            w('\t{ 0, 0, 0 },\n')
        w('};\n')
        w('const LeTable le_table_%s = { "%s", %d, %d, le_runs_%s };\n\n' % (cname, cname, size, len(rs), cname))
    # the structures inside them, laid out the same way too
    w('// The structures inside those, which must be laid out alike as well.\n')
    for t in sorted(gen.used - set(TYPES)):
        if '(' in t or '<' in t:
            continue
        size = records[t][0]
        w('static_assert(sizeof(%s) == %d, "%s is laid out differently on the 68k");\n' % (t, size, t))
        for off, name in top_members(records, t):
            w('static_assert(offsetof(%s, %s) == %d, "%s::%s moved on the 68k");\n' % (t, name, off, t, name))
    for p in sorted(set(gen.problems)):
        sys.stderr.write(p + '\n')


main()
