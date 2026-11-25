#include<iostream>
using namespace std;



//Declare three void function prototypes named backPizza: one with no parameters,
// one with a string parameter for a topping, and one with two string parameters.
//CODE:
void bakePizza();

//CODE:
void bakePizza(string topping1);

//CODE:
void bakePizza(string topping1, string topping2);


int main() {

	//Call bakePizza once with no arguments, once with one topping and once with two toppings.
	//CODE:
	bakePizza();

	//CODE:
	bakePizza("pepperoni");

	//CODE:
	bakePizza("pepperoni", "mushroom");

}

//Define the no-parameter version to print a message for a plain pizza.
//CODE:
void bakePizza() {

	cout << "Here is your plain pizza!\n";
}

//Define the one-parameter version to print a message that includes its toppings.
//CODE:
void bakePizza(string topping1) {

	cout << "Here is your " << topping1 << " pizza!\n";
}

//Define the two-parameter version to print a message that includes both toppings.
//CODE:
void bakePizza(string topping1, string topping2) {

	cout << "Here is your " << topping1 << " " << topping2 << " pizza!" << endl;
}