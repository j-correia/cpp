// cp2ex3.cpp -- Chapter 2 Exercise 3:
// Write a C++ program that uses three user-defined functions
// (counting main() as one) and produces the following output:
// Three blind mice
// Three blind mice
// See how they run
// See how they run

#include <iostream>
using namespace std;

void blind(void)
{
	cout << "Three blind mice";
}

void run(void)
{
	cout << "See how they run";
}

int main()
{
	for(int i = 0 ; i < 2; i++)
	{
		blind();
		cout << endl;
	}
	for(int i = 0 ; i < 2; i++)
	{
		run();
		cout << endl;
	}
	return 0;
}
