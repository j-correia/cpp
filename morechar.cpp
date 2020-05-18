// morechar.cpp -- the char type and int type contrasted

#include <iostream>

int main()
{
	using namespace std;
	char ch = 'M';
	int i = ch;
	cout << "The ASCII code for " << ch << " is " << i << endl;

	// using the cout.put() member function to display a chartype
	cout << "Displaying char ch using cout.put(ch): ";
	cout.put(ch);
	// using the cout.put() to dislay a char constant
	cout.put('!');

	cout << endl << "Done." << endl;
	return 0;	
}
