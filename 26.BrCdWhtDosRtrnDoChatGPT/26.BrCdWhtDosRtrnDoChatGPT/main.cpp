#include<iostream>
using namespace std;



//Declare a double function named square with a double parameter named length.
//CODE:
double square(double length);

//Declare a double function named cube with a double parameter named length.
//CODE:
double cube(double length);

//Declare a string function named concatStrings with two string parameters: 
//string1 and string2
//CODE:
string concatStrings(string string1, string string2);


int main() {

//A return statement sends a value back to the code that called a function.

//Declare a double named length and initialize it ( for example, to 5.0
//CODE:
	double length = 5.0;

//Declare area and volume as doubles. Initialize them by calling square and cube with length
//as the argument.
	double area = square(length);

	double volume = cube(length);

//Declare firstName and lastName as strings and initialize them to "Adam" and "Tindall"
//CODE:
	string firstName = "Adam";
	string lastName = "Tindall";

//Declare fullName as a string. Initialize it by calling concatStrings with first and last name.
//CODE:
	string fullName = concatStrings(firstName, lastName);

//Print a greeting that includes fullName
//CODE:
	cout << "Hello, how are you doing " << fullName << endl;

//Print area with the unit cm^2
//CODE:
	cout << "The area is " << area << "cm^2" << endl;

//Print the volume with cm^3
//CODE:
	cout << "The volume is " << volume << "cm^3" << endl;

}

//Define square to return length multiplied by itself.
//CODE:
double square(double length) {

	return length * length;
}

//Define cube to return length multiplied by itself 3 times.
//CODE:
double cube(double length) {

	return length * length * length;
}

//Define concatStrings to return string1, a space, and string2
//CODE:
string concatStrings(string string1, string string2) {

	return string1 + " " + string2;
}