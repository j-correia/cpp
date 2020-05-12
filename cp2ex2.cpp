#include <iostream>

double furlong2meter(double var)
{
	return ( var * 201.168);
}

int main()
{
	using namespace std;
	cout << "How many furlong? ";
	cin >> (double)furlong;
	cout << furlong
	     << "furlong correspond to "
	     << (furlong2meter(furlong))
	     << " meters.";
}
