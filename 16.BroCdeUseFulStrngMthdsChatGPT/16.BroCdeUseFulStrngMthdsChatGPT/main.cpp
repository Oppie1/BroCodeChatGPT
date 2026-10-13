#include <iostream>
#include <string>

using namespace std;

int main() {
	// Simple string-method exercises. Replace each // CODE: line with the appropriate statement.

	// 1) Prepare a string to hold user input.
	// CODE:
	string name;

	// Example 1 — Read a full line and enforce a max length of 12.
	cout << "Example 1 — Enter your name:\n";
	// Read a line into the string.
	// CODE:
	getline(cin, name);
	// If the name is longer than 12 characters, print an error; otherwise greet the user.
	// CODE:
	if (name.length() > 12) {

		cout << "Name is too long" << endl;
	}
	else { cout << "Welcome " << name << endl; }

	// Example 2 — Detect empty input.
	cout << "\nExample 2 — Enter your name (press Enter to leave empty):\n";
	// Read a line into the same string.
	// CODE:
	getline(cin, name);
	// If the string is empty, inform the user; otherwise greet them.
	// CODE:
	if (name.empty()) {

		cout << "You didnt enter anything" << endl;
	}
	else { cout << "This is a name and not empty. Welcome -> " << name << endl; }
	

	// Example 3 — Clear the string.
	cout << "\nExample 3 — Enter something, then see it cleared:\n";
	// Read a line.
	// CODE:
	getline(cin, name);
	// Clear the string and show that it's empty.
	// CODE:
	name.clear();
	cout << "The name is clear see -> " << name << endl;

	// Example 4 — Append text (build an email).
	cout << "\nExample 4 — Enter a username to append @gmail.com:\n";
	// Read username.
	// CODE:
	getline(cin, name);
	// Append the domain and display the result.
	// CODE:
	name.append("@gmail.com");
	cout << name << endl;

	// Example 5 — Access a character by index.
	cout << "\nExample 5 — Enter a name to show its second character:\n";
	// Read name.
	// CODE:
	getline(cin, name);
	// Print the character 'at' index 1 (explain indexing starts at 0 and to check bounds first).
	// CODE:
	cout << name.at(1) << endl;

	// Example 6 — Insert at a specific position.
	cout << "\nExample 6 — Enter a name to insert '@' at the front:\n";
	// Read name.
	// CODE:
	getline(cin, name);
	// Insert "@" at position 0 and display.
	// CODE:
	name.insert(0, "@");
	cout << name << endl;

	// Example 7 — Find a character (locate the first space).
	cout << "\nExample 7 — Enter a full name (first and last):\n";
	// Read full name.
	// CODE:
	getline(cin, name);
	// Find the first space and print its index (handle not-found if needed).
	// CODE:
	cout<<name.find(" ");

	// Example 8 — Erase a substring.
	cout << "\nExample 8 — Enter a name; first 3 characters will be removed:\n";
	// Read name.
	// CODE:
	getline(cin, name);
	// Erase the first 3 characters and display the remainder (check length before erasing).
	// CODE:
	name.erase(0, 3);
	cout << name << endl;

	return 0;
}