// cp2ex3.cpp -- Chapter 2 Exercise 4:
// Write a program that asks the user to enter his or her age.
// The program then should display the age in months:
// Enter your age: 29
// Your age in months is 384

#include <iostream>
using namespace std;

int main(void)
{
	cout << "Enter your age: ";
	int ageYears;
	cin >> ageYears;
	int ageMonths = ageYears * 12;
	cout << "Your age in months is "
	     << ageMonths
	     << ".";
	return 0;
}
