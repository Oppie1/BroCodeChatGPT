#include <iostream>
using namespace std;

int main() {

	// Shortened, clear for-loop practice. For each item below, replace the "CODE:" line
	// with the loop the prompt describes. Keep answers concise and compile with C++14.

	// 1) Simple for loop: start at 1, run while index <= 3, increment by 2.
	//    Inside the loop print "Happy New Year" three times total.
	// CODE:
	for (int index = 1; index <= 3; index++) {

		cout << "Happy New Year" << endl;
	}

	cout << endl;

	// 2) Standard increment: i starts at 1, runs to 3 (inclusive), increment by 1.
	//    Print "Happy New Year" three times.
	// CODE:
	for (int i = 1; i < 4; i++) {
		
		cout << "Happy New Year" << endl;
	}
	
	cout << endl;

	// 3) Repeat five times: i = 1 to 5 inclusive, print "Happy New Year" each iteration.
	// CODE:
	for (int i = 1; i <= 5; i++) {

		cout << "Happy New Year" << endl;
	}

	// 4) Print numbers 1..10, one per line. After the loop, print "Happy New Year."
	// CODE:
	for (int i=1; i < 11; i++) {

		cout << i << endl;
	}

	cout << "Happy New Year " << "\n" << endl;
	// 5) Print odd numbers from 1 to 9 on the same line (no line breaks). Then print "Happy New Year".
	// CODE:
	for (int i = 1; i < 10; i += 2) {

		cout << i;
	}
	
	cout << "\nHappy New Year" << "\n"<< endl;
	// 6) Start at 0, increment by 3 while <= 10. Print each value on its own line (0,3,6,9).
	//    After the loop, print "Happy New Year".
	// CODE:
	for (int i = 0; i <= 10; i += 3) {

		cout << i << endl;
	}

	cout << "\nHappy New Year" << endl;

	// 7) Countdown: start at 10, decrement to 0 by 1, printing each value on its own line.
	//    After the loop, print "Happy New Year".
	// CODE:
	for (int i = 10; i >= 0; i--) {

		cout << i << endl;
	}

	cout << "Happy New Year\n" << endl;

	// 8) Even-step countdown: start at 10, decrement by 2 while >= 0, print values on the same line,
	//    then append "Happy New Year".
	// CODE:
	for (int i = 10; i >= 0; i -= 2) {

		cout << i;
	}

	cout << "\nHappy New Year!" << endl;

	return 0;
}