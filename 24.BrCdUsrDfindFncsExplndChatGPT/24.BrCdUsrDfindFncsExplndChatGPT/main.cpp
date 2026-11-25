#include<iostream>
using namespace std;





//A function is a reusable block of code.

//Declare a void function named happyBirthday
//It should accept a string name and an int age.
//CODE:
void happyBirthday(string name, int age);


int main() {

	//Create a string named name and set it to "Claudia"
	//CODE:
	string name = "Claudia";

	//Create  an int named age and set it to 45
	//CODE:
	int age = 45;

	//Call happyBirthday using name and age args.
	//CODE:
	happyBirthday(name, age);

}

//Define happyBirthday() with the same parameters as its declaration.
//CODE:
void happyBirthday(string name, int age) {

	//Print "Happy Birthday to " followed by the ame, four times.
	//CODE:
	cout << "Happy Birthday to " << name << endl;
	cout << "Happy Birthday to " << name << endl;
	cout << "Happy Birthday to " << name << endl;
	cout << "Happy Birthday to " << name << endl;

	//Print a complete sentence stating the person's age.
	//CODE:
	cout << "You are the age of " << age << endl;


}