// cp2ex6.cpp -- Chapter 2 Exercise 6
// Write a program that has main() call a user-defined function that takes a distance
// in light years as an argument and then returns the distance in astronomical units.
// The program should request the light year value as input from the user and display
// the result,as shown in the following code:
// Enter the number of light years: 4.2
// 4.2 light years = 265608 astronomical units.

#include <iostream>
using namespace std;

double ly2au(double x)
{
	return (x * 63240);
}

int main()
{
	cout << "Enter the number of light years: ";
	double ly;
	cin >> ly;
	cout << ly
	     << " light years = "
	     << ly2au(ly)
	     << " astronomical units.";
	return 0;
}
