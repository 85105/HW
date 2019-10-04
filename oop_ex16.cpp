/*
oop_ex16.cpp
void pointer
*/

#include <iostream>

using namespace std;

void main()
{
	void *p1, *p2;		// void pointer

	int x = 10;
	double y = 3.6;

	p1 = &x;		//can point to any type
	p2 = &y;

	double* p3;
	//p3 = p2;			// can't convert double* to void*
	p3 = (double*)p2;	// need type conversion

	cout << "*p3 = " << *p3 << endl << endl;


	cout << " p2 = " << p2 << endl;
	//cout<<"*p2 = "<<*p2 <<endl;	// can't dereference void*
	cout << "*(double*)p2 = " << *(double*)p2 << endl; // need type conversion

	system("pause");
}