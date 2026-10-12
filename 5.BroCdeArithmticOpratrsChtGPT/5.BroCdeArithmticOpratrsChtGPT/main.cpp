#include<iostream>
using namespace std;


	/*
	Shortened student exercise: practice C++ arithmetic operators, assignment forms,
	increments/decrements, modulus, and operator precedence. Replace each
	placeholder comment "// CODE:" with the indicated statement(s).
	*/

	int main() {

		// 1) Declare and initialize variables
		// - Create eleven ints: studentsClass1 ... studentsClass11
		//   Start at 20 and increase each successive variable by 5.
		// - Create a double named studentsClass12 initialized to 100.
		// CODE:
		int studentClass1 = 20;
		int studentClass2 = 25;
		int studentClass3 = 30;
		int studentClass4 = 35;
		int studentClass5 = 40;
		int studentClass6 = 45;
		int studentClass7 = 50;
		int studentClass8 = 55;
		int studentClass9 = 60;
		int studentClass10 = 65;
		int studentClass11 = 70;

		double studentClass12 = 100;

		// 2) Modulus and remainder
		// - Declare int remainder = 99;
		// - remainder = studentsClass1 % 2;   // check even/odd
		// - Print remainder with cout.
		// - remainder = studentsClass1 % 3;   // remainder after dividing by 3
		// - Print remainder.
		// CODE:
		int remainder = 99;

		remainder = studentClass1 % 2;
		cout << remainder << endl;

		remainder = studentClass1 % 3;

		// 3) Increment / decrement and compound assignment
		// - Increment studentsClass1 by 1 using a standard add expression.
		// - Then use the compound form (studentsClass1 += 1).
		// - Post-increment studentsClass3 (studentsClass3++).
		// - Subtract 2 from studentsClass4 using a normal expression.
		// - Subtract 2 from studentsClass5 using the -= shorthand.
		// - Post-decrement studentsClass6 (studentsClass6--).
		// - Print studentsClass1 through studentsClass6, each on its own line.
		// CODE:
		studentClass1 = studentClass1 + 1;
		studentClass1 += 1;
		studentClass3++;
		studentClass4 = studentClass4 - 1;
		studentClass5 -= 1;
		studentClass6--;

		cout << studentClass1 << endl;
		cout << studentClass1 << endl;
		cout << studentClass3 << endl;
		cout << studentClass5 << endl;
		cout << studentClass6 << endl;

		// 4) Multiplication forms
		// - Double studentsClass7 using standard multiplication.
		// - Double studentsClass8 using the *= shorthand.
		// - Print studentsClass7 and studentsClass8, each on its own line.
		// CODE:
		studentClass7 = studentClass7 * 2;
		studentClass8 *= 2;
		cout << studentClass7 << endl;
		cout << studentClass8 << endl;


		// 5) Division and type behavior
		// - studentsClass9 = studentsClass9 / 2;
		// - studentsClass10 /= 2;
		// - studentsClass11 = studentsClass11 / 3; // int division: fractional part truncated
		// - studentsClass12 = studentsClass12 / 3; // double division: keeps decimals
		// - Print studentsClass9 through studentsClass12 on one line separated by spaces.
		// CODE:
		studentClass9 = studentClass9 / 2;
		studentClass10 /= 2;
		studentClass11 = studentClass11 / 3;
		studentClass12 = studentClass12 / 3;

		cout << studentClass11 << endl;
		cout << studentClass12 << endl;

		// 6) Operator precedence (PEDMAS)
		// - int people  = 6 - 5 + 4 * 3 / 2;        // evaluate with default precedence
		// - int people2 = 6 - (5 + 4) * 3 / 2;      // parentheses change order
		// - Print people and people2 on separate lines to compare results.
		// CODE:
		int people = 6 - 5 + 4 * 3 / 2;
		int people2 = 6 - (5 + 4) * 3 / 2;

		cout << people << endl;
		cout << people2 << endl;
		// Quick reminders (for students):
		// - % returns the remainder; use %2 to test even/odd.
		// - ++ and -- change a variable by 1; postfix returns the old value.
		// - Compound forms (+=, -=, *=, /=) combine operation + assignment.
		// - Integer division discards fractional parts; use double to retain them.

		return 0;

}