#include <iostream>
using namespace std;

int main() {
	// A do-while loop runs the code block once before checking the condition.
	// Use it when you must request input at least once and then validate it.

	// Declare storage for the user's input.
	// CODE:
	int number;
	// Repeat asking for a positive number until the user enters one.
	// CODE:
	do {

		cout << "Please enter a positive number" << endl;
		cin >> number;

	} while (number < 0);

	cout << number << endl;
	// CODE:

	// Show the accepted value.
	// CODE:

	// ------- Using a while loop instead -------
	// A while loop checks the condition first, so you typically prompt once
	// before entering the loop to ensure the variable is initialized.

	// Declare the second input variable.
	// CODE:
	int number2;

	// Prompt once, then validate with while.
	// CODE:
	cout << "Enter a positive number: ";
	// CODE:
	cin >> number2;

	while (number2 < 0){

		cout << "Enter a positive number" << endl;
	cin >> number2;
	// Keep asking while the value is negative.
	// CODE:
}

cout << number2 << endl;
	// CODE:

	// Display the validated value.
	// CODE:

	// Key difference: do-while guarantees one execution before checking;
	// while may skip the body if the condition is false at the start.
	return 0;
}