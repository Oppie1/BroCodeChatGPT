#include <iostream>
using namespace std;



int main() {


	//Declare ints for the secret number and the player's guess.
	//Also declare a try counter and initialize it to 0.
	//CODE:
	int num;
	int guess;
	int tries = 0;

	//Seed the random-number generator using the current time.
	//CODE:
	srand(time(NULL));

	//Assign  num to a random-number from 1 through 100.
	//CODE:
	num = (rand() % 100) + 1;

	//Display title for the game.
	//CODE:
	cout << "------Number Guessing Game!------\n" << endl;

	//Start a do-while loop so the player gets to guess at least once.
	//CODE:

	do {

		//Ask player for a guess. Then store their input into appropriate var.
		//CODE:
		cout << "Guess a number from 1-100:" << endl;

		cin >> guess;

		//Add one to the tries counter.
		//CODE:
		tries++;

	//If guess is greater than the secret number, say it is too high. Use if statement.
	//If it is less, say it is too low (else/if). Otherwise, congratulate the player and
	//report the number of tries(else).
	//CODE:
		if (guess > num) {

			cout << "You guessed too high. Try again please." << endl;

		}
		else if (guess < num) {

			cout << "You guessed too low. Try again please. " << endl;
	}
		else {

			cout << " Congratulations! You guessed correctly!" << endl;
		}

	} 
	//Continue looping while the guess does not match the secret number. Use while condition.
	//CODE:
	while (guess != num);

	//Reveal the correctly guessed number and number of tries it took in closing message.
	//CODE:
	cout << "Thanks for playing. Secret number was: " << num << endl;	

	cout << "You took " << tries << "tries to guess it! " << endl;
	
}

//The loop repeats after each incorrect guess. Once the guess matches, the loop ends, and the
//program displays its final message.