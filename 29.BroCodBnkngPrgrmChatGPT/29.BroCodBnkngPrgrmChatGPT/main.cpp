#include <iostream>
#include<iomanip>
using namespace std;


//Banking program
//Build a menu-driven program that lets a user check a balance, deposit money,
//withdraw money, or exit. Use separate functions for the balance display, deposits
//and withdrawals.


//Function Declarations 
// Declare a func that displays a balance. It should accept a double and return nothing.
//CODE:
void showBalance(double balance);

//Declare a function that asks for a deposit and returns the amount of a double.
//CODE:
double deposit();

//Declare a func that asks for a withdrawal, accepts the current balance, and returns the approved
//withdrawal amount as a double.
//CODE:
double withdraw(double balance);


int main() {

	//Start the account balance at 100.11. This value changes when money is deposited or withdrawn.
	//CODEL
	double balance = 100.11;

	//Create an int to store the user's menu selection.
	//CODE:
	int choice;

	//Use a do/while loop so the menu appears at least once and repeats until the user chooses to exit.
	//CODE:
	do {

		//Display options to check the balance, deposit, withdraw, or exit.
		//CODE:

		cout << "\n*******************Bank Program*************************\n\n" << endl;

		cout << "Enter your choice\n";

		cout << "***********************************************************\n" << endl;

		cout << "1. Show Balance\n";
		cout << "2. Deposit Money\n";
		cout << "3. Withdraw Money\n";
		cout << "4. Exit\n";

		//Read in user's selection. If input fails, clear the error state and discard the remaining invalid
		//input before continuing.
		//CODE:
		cin >> choice;

		cin.clear();
		fflush(stdin);

		//Use a switch statement to handle each menu choice:
		//1. Display the current balance.
		//2. Add the deposit function's returned amount to the balance,then display the updated balance.
		//3. Subtract the withdrawal function's retuned amount, then display the updated balance.
		//4. Print a farewell message.
		//For any other choice, print an invalid-choice message.
		//Include breaks where needed to prevent cases from falling through.
		//CODE:
		switch (choice) {

		case 1: showBalance(balance);
			break;

		case 2: balance += deposit();
			showBalance(balance);
			break;

		case 3: balance -= withdraw(balance);
			showBalance(balance);
			break;

		case 4: cout << "Thanks for visiting!" << endl;

			break;

		default: cout << "You have pressed an invalid key." << endl;

			break;

		}

		//Continue while the user has not selected the exit button.
		//CODE:

		//End the program successfully.
		//CODE:

	} while (choice != 4);

}

//Balance Display
//Define the display func. Print the balance with a dollar sign and exactly two digits after
//the decimal point. Use fixed-point formatting.
//CODE:
void showBalance(double balance) {

		cout << "Your balance is: " << setprecision(2) << fixed << balance << endl;

}

//Deposit
//Define the deposit function. Ask for an amount and return it only if it is greater than zero.
//Otherwise, tell the user the amount is invalid and return zero so the balance remains unchanged.
//CODE:
double deposit() {

	double amount = 0;

	cout << "How much would you like to deposit?" << endl;

	cin >> amount;

	if (amount > 0) {

		cout << "Thank you for your deposit" << endl;

		return amount;
	}
	else {

		cout << "Sorry you cannot deposit a negative amount" << endl;

		return 0;
	}
}

//Withdrawal
//Define the withdrawal function. Ask for an amount. If it exceeds the available balance, report insufficient
//funcs and return zero. If it is negative, report an invalid amount and return zero. Otherwise, confirm
//the withdrawal and return the amount.
//CODE:
	double withdraw(double balance) {

		double amount = 0;

		cout << "How much would you like to withdraw?" << endl;

		cin >> amount;

		if (balance < amount) {

			cout << "You have insufficient funds" << endl;

			return 0;

		}

		else if (amount < 0) {

			cout << "You cannot withdraw a negative amount" << endl;

			return 0;
		}

		else {

			cout << "Congrats! You withdrew money successfully!" << endl;

			return amount;
		}


}

