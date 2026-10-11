#include <iostream>
using namespace std;

// Demonstrates 'const' for read-only variables. Use 'const' when a value should never change.

int main() {

	// Naming convention: constants use SCREAMING_SNAKE_CASE.

	// Declare fixed constants: PI, LIGHT_SPEED, WIDTH, HEIGHT.
	// CODE:
	const double PI = 3.14259;
	const int LIGHT_SPEED = 299792458;
	const int WIDTH = 1920;
	const int HEIGHT = 1080;

	// Use constants in calculations.
	// Declare radius and compute circumference.
	// CODE:
	double radius = 10;
	double circumference = 2 * PI * radius;

	// Print results.
	// CODE:
	cout << circumference << "cm\n";
	cout << "Speed of light is: " << LIGHT_SPEED << endl;

	return 0;
}