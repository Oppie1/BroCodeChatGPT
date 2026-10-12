#include<iostream>
using namespace std;



int main()
{

//Create a char variable named grade without initial value to store what the user types.
//CODE:
	char grade;

	cout << "What is your grade?" << endl;

//Read the user's input and save it into the grade variable.
//CODE:
	cin >> grade;

//Set up a switch block that examines the grade variable. Each case should check for letter grades
//(A through F) using single quotes, display a message about their performance, and include a break
//to stope execution from continuing to the next case.
//CODE:
	switch (grade) {

	case 'A': cout << "You got an A";
		break;
	
	case 'B': cout << "You got a B";
		break;

	case 'C': cout << "You got a C";
		break;

	case 'D': cout << "You got a D";
		break;

	case 'F': cout << "You got an F";
		break;

	default: cout << "Please enter uppercase A-F " << endl;
	}
}