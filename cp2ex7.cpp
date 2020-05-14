// cp2ex7.cpp -- Chapter 2 Exercise 7
// Write a program that asks the user to enter an hour value and a minute value
// The main() function should then pass these two values to a type void function
// that displays the two values in the format shown in the following sample run:
// Enter the number of hours: 9
// Enter the number of minutes: 28
// Time: 9:28

#include <iostream>
using namespace std;

void displayTime(int hr, int min)
{
	cout << "Time: "
	     << hr
	     << ":"
	     << min;
}

int main()
{
	cout << "Enter the number of hours: ";
	int hr;
	cin >> hr;
	cout << "Enter the number of minutes: ";
	int min;
	cin >> min;
	displayTime(hr, min);
	return 0;
}
