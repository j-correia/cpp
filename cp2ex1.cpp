// cp2ex1.cpp -- Chapter 2 Exercise 1:
// Write a C++ program that displays your name and address
// (or if you value your privacy,a fictitious name and address).

#include<iostream>
using namespace std;

int main()
{
	string name = "Esteban Julio Ricardo Montoya de la Rosa Ramirez";
	string adress = "My Apartment";
	cout << "My name is: "
	     << name
	     << " and I live in "
	     << adress
	     << ".";
	return 0;
}
