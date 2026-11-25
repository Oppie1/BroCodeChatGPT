#include<iostream>
#include<ctime>
using namespace std;



int main() {

	//Seed the random number generator with the current time so runs can produce different results
	//CODE:
	srand(time(0));

	//Generate a random number from 1 to 5.
	//The remainder from % 5 is 0-4; adding 1 shifts the range to 1-5
	//CODE:
	int randomNumber = rand() % 5 + 1;

	//Use a switch statement to check the random number.
	//CODE:
		switch (randomNumber) {

	//Add cases 1 through 5. Print a different prize in each case, then use break so execution does 
	//not continue into the next case. 
	//CODE:

		case 1: cout << "You won a lottery ticket	" << endl;
			break;
		case 2: cout << "You won a T-shirt " << endl;
			break;
		case 3: cout << "You won a computer" << endl;
			break;
		case 4: cout << "You won some money" << endl;
			break;
		case 5: cout << "You solved the Riemann Hypothesis " << endl;
			break;
	}

}