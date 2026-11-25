#include<iostream>
using namespace std;



//Declare a void function named printNum2 that accepts an integer parameter named myNum.
//CODE:
void printNum2(int myNum2); //Global variable

void printNum3(int myNum3);


int main()
{

	//Local variables are declared inside a func or block.
	//Global vars are declared outside all funcs.
	
	//Declare a local integer named myNu, and initialize it to 1.
	//CODE:
	int myNum = 1; //local variable

	//Print myNum
	//CODE:
	cout << myNum << endl;

	//Call printNum2, passing myNum as the argument. The function receives a copy in its parameter, myNum2
	//CODE:
	printNum2(myNum);

	//Call printNum3, passing myNum as the argument.
	//CODE:
	printNum3(myNum);

	return 0;

}

//Define printNum2 with an int parameter named myNum2. Inside the func, declare a local int named myNumA and
//set it to 3. Print myNumA. The parameter and myNumA are separate vars; myNum2 is not used in this function.
//CODE:
void printNum2(int myNum2) {

	int myNumA = 3;

	cout << myNumA << endl;;
}

//Define printNum3 with an int parameter named myNum3. Inside the func, declare a local int named
// myNumB and set it to 7. Print myNumB. The parameter and myNumB are separate vars. myNumb3 is not used
// in this func.
//CODE:
void printNum3(int myNum3) {

	int myNumB = 7;

	cout << myNumB << endl;
}