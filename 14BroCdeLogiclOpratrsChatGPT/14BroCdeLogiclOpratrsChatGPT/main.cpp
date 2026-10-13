#include<iostream>
using namespace std;


	int main() {
		// Logical operators:
		// &&  -> true when both conditions are true
		// ||  -> true when at least one condition is true
		// !   -> negates a boolean

		// 1) Create two temperature variables
		// CODE:
		int temp1;
		int temp2;

		// 2) Create a boolean called sunny initialized to true
		// CODE:
		bool sunny = true;

		cout << "Enter the temperature: ";
		// 3) Read the first temperature from the user
		// CODE:
		cin >> temp1;

		// 4) Print a positive message if temp is between 0 and 30 (exclusive)
		// CODE:
		if (temp1 > 0 && temp1 < 30) {

			cout << "It's a nice temperature outside" << endl;
		}
		else {
			cout << "It's a bad temp " << endl;
		}

		cout << "Enter temperature 2: ";
		// 5) Read the second temperature
		// CODE:
		cin >> temp2;

		if (temp2 < 0 || temp2 >30) {

			cout << "The temp is not ideal today" << endl;
		}
		else {
			
			cout << "Could be worse" << endl;
		}


		// 6) Use || to detect problematic temp2 (too cold or too hot)
		// Problematic if <= 0 OR >= 30
		// CODE:

		// 7) Use 'sunny' in a simple if-else to report weather
		// CODE:
		if (sunny) {

			cout << "It's a sunny day!" << endl;
		}
		else { cout << "It's a cloudy day!" << endl; }

		// 8) Use the NOT operator (!) to invert the boolean condition
		// CODE:	
		if (!sunny) {

			cout << "It is a cloudy and maybe rainy day :)" << endl;

		}
		else { cout << "Here comes the sun" << endl; }
				return 0;


}