// sqrt.cpp -- using the sqrt() function

#include <iostream>
#include <cmath> 		// or math.h

int main()
{
	using namespace std;

	double area;
	cout << "Enter the floor area, in square meters, of your home: ";
	cin >> area;
	double side;
	side = sqrt(area);
	cout	<< "That's the equivalent space of a square "
		<< side
		<< " meters to the side."
		<< endl;
	cout << "How quaint!" << endl;
	return 0;
}
