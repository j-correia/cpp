#include <iostream>

double furlong2meter(double var)
{
	return ( var * 201.168);
}

int main()
{
	using namespace std;
	cout << "How many furlong? ";
	double furlong;
	cin >> furlong;
	cout << furlong
	     << " correspond to "
	     << (furlong2meter(furlong))
	     << " meters.";
}
