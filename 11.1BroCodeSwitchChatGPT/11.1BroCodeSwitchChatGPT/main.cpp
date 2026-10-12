#include<iostream>
using namespace std;



int main() {

	//A switch statement lets you check a value against multiple options without writing lots of if-else statements.
	// It takes a value and compares it to different cases to find a match.
	

	// Student task: declare a variable to hold the month number the user will type.
	// Hint: use an integer named `month` (for example: int month; — place that on the blank line).
	//CODE:
	int month;

	cout << "Enter the month (1-12): ";

	//Get the user's input and save it in the month variable.
	//CODE:
	cin >> month;
	// Student task: read the user's input into the `month` variable.
	// Hint: use standard input extraction (for example: cin >> month;).

	//Check the month value against cases 1 through 12, and display the matching month name. Each case needs a
	//break statement to stop and exit the switch instead of running the next case.
	//Use a switch statement with the parameter of month with cases, outputs and break; accordingly.
	//CODE:
	switch (month)

	{
	case 1: cout << "January";
		break;
	
	case 2: cout << "February";
		break;

	case 3: cout << "March";
		break;

	case 4: cout << "April";
		break;

	case 5: cout << "May";
		break;

	case 6: cout << "June";
		break;

	case 7: cout << "July";
		break;

	case 8: cout << "August";
		break;

	case 9: cout << "September";

	case 10: cout << "October";
		break;

	case 11: cout << "November";
		break;

	case 12: cout << "December";
		break;

	default: cout << "Please select number 1-12 for month." << endl;
	}

	// Student task: implement a `switch(month)` with cases 1..12.
	// For each case:
	//   - print the corresponding month name (e.g., cout << "It is January";)
	//   - end the case with `break;`
	// After case 12 add a `default:` case to handle invalid numbers.

		//If the user enters a number that doesnt match any case, the default option runs. This tells the user
		// to pick a valid month number between 1 and 12.
		//CODE:

		// Student task: in the `default:` case, print a clear message such as:
		// "Please select number 1-12" (you may append `<< endl` for a newline).

}