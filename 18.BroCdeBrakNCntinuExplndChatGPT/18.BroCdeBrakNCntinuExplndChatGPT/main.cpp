#include <iostream>
using namespace std;

int main()
{
	// Quick: show the difference between 'break' and 'continue'.
	//
	// Exercise 1 — break:
	// - Create a for loop that counts from 1 to 20.
	for (int i = 1; i < 21; i++) {

		if (i == 13) {

			break;
		}

		cout << i << endl;
	}
	// - If i == 13, execute a break so the loop stops and numbers 13..20 are not printed.
	// - Otherwise print the current value of i.
	// CODE: for (int i = 1; i <= 20; i++) { ... }
	// CODE: if (i == 13) { break; }
	// CODE: cout << i << endl;

	cout << '\n';

	// Exercise 2 — continue:
	// - Create a for loop that counts from 1 to 20.
	for (int i = 1; i < 21; i+=2) {

		if (i == 13) {

			continue;
		}

		cout << i;
	}
	// - If i == 13, execute a continue so the iteration for 13 is skipped but the loop continues.
	// - Otherwise print the current value of i.
	// CODE: for (int i = 1; i <= 20; i++) { ... }
	// CODE: if (i == 13) { continue; }
	// CODE: cout << i << endl;

	return 0;
}