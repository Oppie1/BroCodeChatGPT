#include <iostream>
#include <string>
using namespace std;

int main() {
	// Declare variables
	// CODE: declare string for first name
	
	string firstName;
	
	// CODE: declare string for full name
	string secondName;

	// CODE: declare int for age
	int age;

	// First-name prompt and read
	// CODE: print prompt for first name
	// CODE: read first name with cin
	cout << "Please enter your first name" << endl;
	cin >> firstName;

	// Echo first name
	// CODE: print greeting that includes first name
	cout << firstName << endl;

	// Full-name prompt and read
	// CODE: print prompt for full name
	// NOTE: handle leftover newline before reading the full line (use ws manipulator with getline or call cin.ignore)
	// CODE: read full name with getline
	cout << "Print full name" << endl;
	getline(cin >> ws, secondName);

	// Echo full name
	// CODE: print the full name
	cout << secondName << endl;

	// Age prompt and read
	// CODE: print prompt for age
	// CODE: read age with cin
	cout << "Please enter your age" << endl;
	cin >> age;

	// Echo age
	// CODE: print age confirmation
	cout << age << endl;

	return 0;
}