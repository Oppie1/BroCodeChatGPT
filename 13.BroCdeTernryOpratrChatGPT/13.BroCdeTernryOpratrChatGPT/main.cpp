#include <iostream>
using namespace std;

int main() {

	// Ternary operator: condition ? value_if_true : value_if_false
	// Use it to make short inline decisions.

	// 1) Create an integer variable `grade` (1-100).
	// CODE:
	int grade = 51;
	// Hint: choose a value, e.g. 51
	

	// 2) Use the ternary operator to print whether the grade is a pass (>=60) or fail.
	// CODE:
	grade >= 60 ? cout << "Under 60" : cout << "Over 60";

	cout << "\n" << endl;
	// Hint: condition should be (grade >= 60)
	
	// 3) Create an integer `number` and determine if it's even or odd.
	// CODE:
	int number = 3;

	number % 2 ? cout << "ODD" : cout << "EVEN";
	// Hint: use number % 2; treat 0 as even

	cout << "\n" << endl;
	

	// 4) Create a boolean `hungry` (true/false) and print a message describing the state.
	// CODE:
	bool hungry = true;

	hungry ? cout << "I'm hungry" : cout << "Im not hungry";
	// Hint: hungry ? "User is hungry." : "User is not hungry."
	
	cout << "\n" << endl;
	// 5) One-line example: use a single cout with a ternary expression.
	// CODE:
	cout << (hungry ? "I'm hungry" : "I'm not hungry");
	// Hint: wrap the ternary in parentheses inside cout

	return 0;
}