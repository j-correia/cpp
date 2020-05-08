// carrots.cpp -- food processing program
// uses and displays a variable

#include <iostream>

int main()
{
	using namespace std;
	int carrots;		// Declare an integer variable
	carrots = 25;		// Assign a value to said variable
	cout << "I have ";
	cout << carrots;	// Display the value of the variable
	cout << " carrots.";
	cout << endl;
	carrots = carrots - 1;	// Modify the variable
	cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;
	return 0;
}