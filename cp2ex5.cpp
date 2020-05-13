// cp2ex3.cpp -- Chapter 2 Exercise 4:
// Write a program that has main() call a user-defined function
// that takes a Celsius temperature value as an argument and then
// returns the equivalent Fahrenheit value.
// The program should request the Celsius value as input from the
// user and display the result,as shown in the following code:
// Please enter a Celsius value: 20
// 20 degrees Celsius is 68 degrees Fahrenheit.

#include <iostream>
using namespace std;

double celsius2farenheit(double temp)
{
	return (1.8 * temp + 32);
}

double farenheit2celsius(double temp)
{
	return ((temp - 32) / 1.8);
}

int main()
{
	cout << "Please enter a Celsius value: ";
	double temp;
	cin >> temp;
	cout << celsius2farenheit(temp)
	     << " degrees Celsius is 68 degrees Fahrenheit.";
	// The following has been added because, well, I can
	cout << "\nTherefore "
	     << celsius2farenheit(temp)
	     << " degrees Farenheit is "
	     << celsius2farenheit(farenheit2celsius(temp))
	     << " degrees Celsius.";
	return 0;
}
