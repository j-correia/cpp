// getinfo.cpp -- input and output tester
#include <iostream>

int main()
{
	using namespace std;

	int carrots;

	cout << "How many carrots do you have?" << endl;
	cin >> carrots;						// c++ input
	cout << "Here, have two more.";
	carrots = carrots + 2;

	cout << "\nNow you have " << carrots << " carrots." << endl;
	return 0;
}
