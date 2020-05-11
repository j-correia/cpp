// convert.cpp -- converts stone to kg
#include <iostream>

double stonetokg(double sts)
{
	return (6.35029 * sts);
}

int main()
{
	using namespace std;
	double stone;
	cout << "Enter the weight in stone: ";
	cin >> stone;
	double kg = stonetokg(stone);
	cout << stone
	     << " stone = "
	     << kg
	     << " kilograms."
	     << endl;
	return 0;
}
