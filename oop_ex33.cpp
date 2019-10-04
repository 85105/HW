/*
cpp_ex33.cpp
Using call by reference to return multiple values
*/

#include <iostream>
using namespace std;


void fourop(const double& x, const double& y, double& a, double& s, double& m, double& d)
{
	a = x + y;
	s = x - y;
	m = x * y;
	d = x / y;

	//x = y;
}



void main()
{
	cout << "Please enter two numbers:" << endl;

	double x, y;
	double add, min, mult, div;

	cin >> x >> y;

	fourop(x, y, add, min, mult, div);

	cout << x << " + " << y << " = " << add << endl;
	cout << x << " - " << y << " = " << min << endl;
	cout << x << " * " << y << " = " << mult << endl;
	cout << x << " / " << y << " = " << div << endl;

	system("pause");
}

