/*
oop_ex39.cpp
default argument for C++ functions
*/


#include <iostream>
using namespace std;


double boxVolume(double l = 1.0, double w = 1.0, double h = 1.0);
//double boxVolume(double l, double w, double h);



void main()
{
	cout << "boxVolume() = " << boxVolume() << endl;
	cout << "boxVolume(5) = " << boxVolume(5) << endl;
	cout << "boxVolume(5,4) = " << boxVolume(5, 4) << endl;
	cout << "boxVolume(5,4,3) = " << boxVolume(5, 4, 3) << endl;

	system("pause");
}


//double boxVolume(double l=1.0, double w=1.0, double h=1.0)
double boxVolume(double l, double w, double h)
{
	cout << "l = " << l << " w = " << w << " h = " << h << endl;

	return l * w*h;
}