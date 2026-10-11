#include <iostream>
#include<vector>
using namespace std;


// Type aliases make long or repeated types clearer.
// Modern C++ prefers 'using' over 'typedef'.
// Replace each `// CODE:` with the correct line(s).

// Create 3 simple aliases for commonly used types.
// Create a type alias for std::string, then for int, then simplify std::cout/
// CODE: 
using text_t = std::string;
using number_t = int;
using std::cout;

int main() {

	// Use aliases instead of repeating long type names.
	// Declare a string variable named firstName using the alias.
	// CODE: 
	text_t firstName = "Adam";

	// Declare an integer variable named age using the alias.
	// CODE: 
	number_t age = 23;

	// Print the values on separate lines.
	// CODE: 
	cout << firstName << endl;
	cout << age << endl;

	return 0;
}