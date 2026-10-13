#include <iostream>
using namespace std;

int main() {

	// Create a double variable to hold the temperature value we'll convert
	// CODE:
	double temp;

	// Create a char variable for the user's unit selection (F or C)
	// CODE:
	char unit;
	

	cout << "******Temperature Conversion****** " << endl;
	cout << "F = Fahrenheit\n";
	cout << "C = Celsius\n";
	cout << "What would you like to convert to?\n";

	// Read the user's choice into 'unit'
	// CODE:
	cin >> unit;

	// If the user wants Fahrenheit (convert Celsius -> Fahrenheit)
	// - Prompt for Celsius
	// - Read temp
	// - Apply: temp = (1.8 * temp) + 32
	// - Print result with "F"
	// Use if statement
	// CODE:
	if (unit == 'F' || unit == 'f') {
		cout << "Enter the temperature in C: \n";
		cin >> temp;
		temp = (1.8 * temp) + 32;
		cout << "The temp in Fahrenheit is: " << temp << endl;
	}

		
		// CODE:
		// read temp
		// CODE:
	else if (unit == 'C' || unit == 'c') {

		cout << "Enter the temperature in Fahrenheit: \n";
			cin >> temp;

			temp = (temp - 32) / 1.8;
			cout << "The temp in Celsius is: " << temp << endl;
		}
		// convert and print

	// If the user wants Celsius (convert Fahrenheit -> Celsius)
	// - Prompt for Fahrenheit
	// - Read temp
	// - Apply: temp = (temp - 32) / 1.8
	// - Print result with "C"
	//Use else if
	// CODE:
	
		// CODE:
		// read temp
		// CODE:
		// convert and print

	// Invalid input -> Use else
		cout << "You input a invalid key" << endl;

	cout << "******Program Ends******" << endl;
	return 0;
}