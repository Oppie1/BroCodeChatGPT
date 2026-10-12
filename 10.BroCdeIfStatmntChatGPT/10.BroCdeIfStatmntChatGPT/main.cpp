#include <iostream>
using namespace std;

// If statements let a program make decisions: execute a block only when a condition is true.
// The file below keeps the original learning structure but leaves the actual lines students must
// type blank. Each "CODE:" marker remains and is followed by a short, actionable hint describing
// what the student should enter there.

int main() {

	// Create an integer variable named age and declare it without initializing a value yet.
	// CODE:
	int age;

	// Hint: declare a variable called 'age' of type int here.

	cout << "Enter your age: ";

	// Read the user's input from the keyboard and store that value in the age variable.
	// CODE:
	cin >> age;
	// Hint: use 'cin >>' to read a value into the variable named 'age'.

	// Create an if statement that evaluates whether age is greater than 100. If this condition is true,
	// display a message telling the user they cannot access the site due to their age.
	// CODE:
	if (age > 100) {
		cout << "You are too old to enter this site" << endl;
	}
	// Hint: write an if that checks 'age > 100' and prints a message when true.
	else if (age > 18) {

		cout << "You are old enough but not too old to enter this site" << endl;
	}
	// Create an else if statement that checks if age is greater than 18. If this condition is true,
	// display a welcome message to the user.
	// CODE:
	// Hint: add 'else if (age > 18)' to greet adult users who are not over 100.
	else if (age == 18) {

		cout << "You are exactly 18 and may enter this webiste" << endl;
	}
	// Create an else if statement that checks if age is exactly equal to 18.
	// Note: use '==' to compare values; '=' is assignment.
	// CODE:
	// Hint: use 'else if (age == 18)' and print a message acknowledging they are exactly 18.

	// Create an else if statement that checks if age is greater than or equal to 18. Display a welcome message
	// explaining that this comparison operator is the correct one to use in this scenario.
	// CODE:
	// Hint: demonstrate 'else if (age >= 18)' and explain why '>=' might be used here (ordering matters).
	else if (age >= 18) {

		cout << "This is the combo that should be used since it encompasses both statements" << endl;
	}
	// Create an else if statement that checks if age is less than 0. If true, display a message indicating the
	// user has not yet been born. This condition is checked even if previous conditions are skipped.
	// CODE:
	else if (age < 0) {

		cout << "You are not born yet" << endl;
	}
	// Hint: use 'else if (age < 0)' to catch invalid negative input and print an appropriate message.

	// Create a final else statement that handles all remaining cases where the age is less than 18.
	// Display a message denying the user access to the site.
	// CODE:
	// Hint: write a final 'else' that denies access for users younger than 18.
	else if (age < 18) {

cout << "You're too young to enter. Adam may have colon or stomach cancer digestive track in real pain daily" << endl;
	}

	return 0;

}