/* Welcome to Change Counter!
This program takes a dollar amount as user input 
and displays the minimum number of bills and coins therein.*/

#include <iostream>
using namespace std;

int main() {
	// Declare variables for amount, cents, and each denomination.
	double amount;
	int cents;
	int hundreds;
	int fifties;
	int twenties;
	int tens;
	int fives;
	int twos;
	int ones;
	int quarters;
	int dimes;
	int nickels;
	int pennies;

	cout << "Enter dollar amount: $";
	cin >> amount;

	// Convert dollar and cents to cents (rounded to nearest cent)
	cents = (int)round(amount * 100);

	/* Using int division, the number of bills for each denomination
		is extracted without a remainder. The remaining number of bills
		is extracted with modulus. This remainder is then divided, and the process 
		is repeated, until all bill quantities have been determined.*/
	hundreds = cents / 10000;
	cents %= 10000;
	fifties = cents / 5000;
	cents %= 5000;
	twenties = cents / 2000;
	cents %= 2000;
	tens = cents / 1000;
	cents %= 1000;
	fives = cents / 500;
	cents %= 500;
	twos = cents / 200;
	cents %= 200;
	ones = cents / 100;
	cents %= 100;
	// The same method used for bills is used again for coins.
	quarters = cents / 25;
	cents %= 25;
	dimes = cents / 10;
	cents %= 10;
	nickels = cents / 5;
	pennies = cents % 5;

	// Results display.
	cout << "\n" "The minimum number of bills and coins for $" << amount << " is: \n"
		<< hundreds << " hundreds " << fifties << " fifties " << twenties << " twenties " << 
		tens << " tens " << fives << " fives " << twos << " twos " << ones << " ones " <<
		quarters << " quarters " << dimes << " dimes " << nickels << " nickels, and " << pennies << " pennies.\n" <<
		"Total Number of Bills: " << (hundreds + fifties + twenties + tens + fives + twos + ones) << "\n" <<
		"Total Number of Coins: " << (quarters + dimes + nickels + pennies) << "\n" <<
		"Combined Total: " << (hundreds + fifties + twenties + tens + fives + twos + ones + quarters + dimes + nickels + pennies);
}