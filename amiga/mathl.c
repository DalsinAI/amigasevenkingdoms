/* ColorTable::color_dist_hsv() (src/OCOLTBL.cpp) takes the cosine and the
 * sine of one long double angle (its PI is a long double constant); GCC
 * makes that one cexpl() call, which libnix's maths library does not have.
 * Here it is, on the 68881's double precision: the result is turned into
 * an int distance between two palette colours.
 * The AmiCradle Team. GPL 2 or later, like Seven Kingdoms. */
#include <complex.h>
#include <math.h>

long double _Complex cexpl(long double _Complex z)
{
	double e = exp((double)creall(z));
	double y = (double)cimagl(z);
	long double _Complex r;
	__real__ r = e * cos(y);
	__imag__ r = e * sin(y);
	return r;
}
