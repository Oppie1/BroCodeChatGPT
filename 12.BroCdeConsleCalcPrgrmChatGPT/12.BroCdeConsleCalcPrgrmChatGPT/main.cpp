#include <iostream>
using namespace std;

int main() {

	cout << "***********CALCULATOR***********\n";

	// 1) Declare variables: op (char), num1 (double), num2 (double), result (double)
	// CODE:
	char op;
	double num1;
	double num2;
	double result = 0;

	cout << "Enter either (+, -, *, /): ";

	// 2) Read operator from user
	// CODE:
	cin >> op;

	cout << "Enter #1: ";

	// 3) Read first number
	// CODE:
	cin >> num1;
	cout << "Enter #2: ";

	// 4) Read second number
	// CODE:
	cin >> num2;

	// 5) Select operation using switch(op)
	// For each case ('+', '-', '*', '/'):
	//   - compute result
	//   - print result
	//   - break
	// Remember to include a default case for invalid operators.
	// CODE:
	switch(op){

	case '+': 
		result = num1 + num2;
		break;
		// CODE:
	case '-':
		result = num1 - num2;
		break;

	case '*': 
		result = num1 * num2;
		break;

	case '/':
		result = num1 / num2;
		break;

	default: cout << "Please selected one of the operators" << endl;
		// CODE:
	
		// CODE:
	
		// Optional: check for division by zero before computing
		// CODE:
	
		// CODE:
		
		
	}

	cout << "The result is " << result << endl;


	cout << "***********************************\n";

	return 0;
}