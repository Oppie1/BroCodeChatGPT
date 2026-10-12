#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	// Short exercise: declare doubles, use math helpers, and print results.
	// Fill each "CODE:" placeholder with the missing statement.

	// 1) Declare variables (a, b, z, c, d, e, f, g).
	//    Initialize at least two with whole numbers, some with decimals,
	//    and leave a few to assign later.
	// CODE:
	double a;
	double b;
	double c;
	double d = 3.14;
	double e = 3.14;
	double f = 3.99;
	double g = 3;
	double h = 4;

	// 2) Use max(f, g) -> z, then print z.
	// CODE:
	c = max(f, g);
	cout << c << endl;

	// 3) Use min(f, g) -> z, then print z.
	// CODE:
	c = min(f, g);
	cout << c << endl;

	// 4) Use pow to compute 2^4 -> g and 2^3 -> f, then print both.
	// CODE:
	g = pow(2, 4);
	f = pow(2, 3);
	cout << g << endl;
	cout << h << endl;

	// 5) sqrt(9) -> a, then print a.
	// CODE:
	a = sqrt(9);
	cout << a << endl;

	// 6) abs(-7) -> b, then print b.
	// CODE:
	b = abs(-7);
	cout << b << endl;

	// 7) round(c) -> c, then print.
	// CODE:
	c = round(c);
	cout << c << endl;

	// 8) ceil(d) -> d, then print.
	// CODE:
	d = ceil(d);
	cout << d << endl;

	// 9) floor(e) -> e, then print.
	// CODE:
	e = floor(e);
	cout << e << endl;

	return 0;
}