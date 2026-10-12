#include <iostream>
using namespace std;

int main() {

	// Type conversion: changing a value from one data type to another.
	// - Implicit: compiler converts automatically (may lose information).
	// - Explicit (cast): you force conversion with a type in parentheses, e.g. (int).

	// 1) Create an int from 3.14 and observe truncation.
	// CODE: // declare int x and assign 3.14
	int x = 3.14;

	// 2) Create a double from 3.14 to preserve the decimal.
	// CODE: // declare double y and assign 3.14
	double y = 3.14;

	// 3) Explicit cast: convert 3.14 to int first (z), then store in a double.
	// CODE: // declare double z = (int)3.14;
	double z = (int)3.14;

	// 4) Assign an integer value to a char to see ASCII mapping.
	// CODE: // declare char a = 100;
	char a = 100;

	// 5) Print the variables to observe results and conversions.
	// CODE: 
	cout << x << endl;
	// CODE:
	cout << y << endl;
	// CODE:
	cout << a << endl;
	// CODE:
	cout << (char)100 << endl;

	// 6) Small exercise: compute a test percentage.
	// - Use two ints: number correct and total questions.
	// - Compute score1 using integer division (shows loss of precision).
	// - Compute score2 by casting to double to keep fractional result.
	// CODE:
	int numberCorrect = 8;
	int totalQuestions = 10;
	
	double score1 = numberCorrect / totalQuestions * 100;
	double score2 = numberCorrect / (double)totalQuestions * 100;

	cout << "Your score is " << score1 << endl;
	cout << "Your score is " << score2 << endl;
	
	// CODE: // double score1 = correct / questions * 100;
	// CODE: // double score2 = correct / (double)questions * 100;
	// CODE: // cout << "Your score is: " << score1 << "%" << endl;
	// CODE: // cout << "Your score is: " << score2 << "%" << endl;

	return 0;
}