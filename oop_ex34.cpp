/*
functions to swap the values of two variables
*/


#include <iostream>
using namespace std;


void swapByValue(int x, int y);

void swapByAddress(int* x, int* y);

void swapByReference(int& x, int &y);


void main()
{
	int a = 3, b = 300;
	cout << "a = " << a << " ; b = " << b << endl << endl;

	swapByValue(a, b);
	cout << "After calling swapByValue(a, b);" << endl;
	cout << "a = " << a << " ; b = " << b << endl << endl;

	swapByAddress(&a, &b);
	cout << "After calling swapByAddress(&a, &b);" << endl;
	cout << "a = " << a << " ; b = " << b << endl << endl;

	swapByReference(a, b);
	cout << "After calling swapByReference(a, b);" << endl;
	cout << "a = " << a << " ; b = " << b << endl << endl;

	system("pause");
}


void swapByValue(int x, int y)
{
	//cout << "x = " << x << " ; y = " << y << endl;

	int temp = x;
	x = y;
	y = temp;

	//cout << "x = " << x << " ; y = " << y << endl;
}


void swapByAddress(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}


void swapByReference(int &x, int &y)
{
	int temp = x;
	x = y;
	y = temp;
}