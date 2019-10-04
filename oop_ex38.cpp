/*
oop_ex38.cpp
function overloading
*/

#include <iostream>
using namespace std;

//double max(int x, double y){ return -100000; }
double max(double x, double y);
int max(int x, int y);			// ぃ把计戈篈

int min(int x, int y);
int min(int x, int y, int z);		// ぃ把计计

									//int sum(int x, int y);
									//double sum(int x, int y);			// ぃ肚篈


void main()
{
	cout << "max(1, 100)=" << max(1, 100) << endl;
	cout << "max(2.5, 50.01)=" << max(2.5, 50.01) << endl;
	//cout<< "max(3, 25.0)=" << max(3, 25.0) <<endl;    //error: cannot tell which overloaded function to be called

	cout << "min(1,3,5)=" << min(1, 3, 5) << endl;
	cout << "min(2,4)=" << min(2, 4) << endl;

	system("pause");
}



// function definitations
double max(double x, double y)
{
	cout << "inside max(double x, double y)" << endl;
	return (x >= y ? x : y);
}

int max(int x, int y)
{
	cout << "inside max(int x, int y)" << endl;
	return (x >= y ? x : y);
}

int min(int x, int y)
{
	cout << "inside min(int x, int y)" << endl;
	return (x <= y ? x : y);
}

int min(int x, int y, int z)
{
	cout << "inside min(int x, int y, int z)" << endl;
	if (x <= y && x <= z)
		return x;
	else if (y <= x && y <= z)
		return y;
	else
		return z;
}

/*
int sum(int x, int y)
{
return x+y;
}

double sum(int x, int y);
{
double z = x+y;
return z;
}
*/