#include<iostream>
using namespace std;



int main() {


//Seed the random-number generator using the current time.
//CODE:
srand(time(NULL));

//Declare num1, num2 and num3 as integers.
//Give each a random value from 1 - 6. The modulus operator keeps a remainder
//rom 0 to 5; add 1 to shift the range to 1-6.
//CODE:
int num1 = (rand() % 6) + 1;
int num2 = (rand() % 6) + 1;
int num3 = (rand() % 6) + 1;

//Print each number on its own line.
//CODE:
cout << num1 << endl;
cout << num2 << endl;
cout << num3 << endl;

}