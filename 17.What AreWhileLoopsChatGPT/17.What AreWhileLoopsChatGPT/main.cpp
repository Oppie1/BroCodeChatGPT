#include<iostream>
#include<string>
using namespace std;


		int main() {

		// Create a string variable named name (leave it empty to start).
		// CODE:
			string name;
		// Repeat while the name is empty:
		// - Prompt the user to enter their name.
		// - Read the whole line into name (so spaces are allowed).
		// The loop ends once name is non-empty.
		// CODE:
			
			while (name.empty()) {
				
				cout << "Please enter your name" << endl;
				
				getline(cin, name);
			}
			cout << "Hello " << name << endl;
		// Show a greeting using the name the user entered.
		// CODE:

			cout << "Optional Example" << endl;

			while (1 == 1) {

				cout << "Help, I am stuck in an infinite loop! " << endl;
			}

		return 0;
	}

	// Optional: example of an infinite loop to demonstrate what to avoid.
	// // CODE:

//Example of an infinite loop using a while statement.
//While (1==1){

//cout <<"Help! I am stuck in an infinite loop" << endl;
//}