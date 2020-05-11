// ourfunc.cpp -- defining your own function
#include <iostream>
void simon(int);	// function prototype for simon()

void simon(int n)	// define simon function
{
	using namespace std;
	cout << "Simon says touch your toes "
	     << n
	     << " times."
	     << endl;
	// void functions do not use no return
}

int main()
{
	using namespace std;
	simon(3);	// call function simon()
	cout << "Pick an integer: ";
	int count;
	cin >> count;
	simon(count);	// call simon again
	cout << "Done!";
	return 0;
}
