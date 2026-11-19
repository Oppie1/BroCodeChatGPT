#include<iostream>
using namespace std;



int main() {

	//Declare int vars for row and column counts, and a char var for the symbol to print.
	//CODE:
	int rows;
	int columns;
	char symbol;

	cout << "How many rows" << endl;

	//Read the row count into rows.
	//CODE:
	cin >> rows;

	cout << "How many columns?" << endl;
	//Read the column count into columns.
	//CODE:
	cin >> columns;

	cout<<"Enter symbol you would like to use." << endl;
	//Read the symbol count into symbol.
	//CODE:
	cin >> symbol;

	//Write a for loop that repeats once for each row.
	//CODE:
	for (int i = 0; i < rows; i++) {

		//Inside the outer loop, write a nested for loop that repeats once for each column. 
		//Print the symbol on the same line each time.
		//CODE:
		for (int j = 0; j < columns; j++) {

			cout << symbol;

		}

		//After each row is complete, move to the next line.
		//CODE:
		cout << endl;

	}

}