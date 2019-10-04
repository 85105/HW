#include <iostream>

using namespace std;


int main()
{
	//--------------------------------------
	//multiple declarations in a single line
	int* a, b;
	int *c, *d;
	int e = 10;
	a = &e;
	//b = &e;		//b is type int, not pointer to int
	b = e;
	c = &e;
	d = &e;


	//--------------------------------------
	cout << "& and *(deferencing) operations" << endl;

	double pi = 3.14159;
	double *piPtr;

	// point piPtr to the address of pi
	piPtr = &pi;

	cout << "The address of pi is " << &pi << endl;
	cout << "The value of piPtr is " << piPtr << endl << endl;

	cout << "The value of pi is " << pi << endl;
	cout << "The value of *piPtr is " << *piPtr << endl;

	cout << "The value of &*piPtr is " << &*piPtr << endl;
	cout << "The value of *&piPtr is " << *&piPtr << endl << endl;


	//-------------------------------------------------------------------
	cout << "assign & retrive data through pointer" << endl;

	double t = 1.23, g = 1000.5;


	//point gPtr to the address of g
	double *gPtr = &g;
	//double* gPtr;
	//gPtr = &g;

	//copy the value of t to the memory pointered by gPtr
	*gPtr = t;

	t *= 2;

	cout << "g = " << g << endl;
	cout << "*gPtr = " << *gPtr << endl;

	cout << "The address of g is " << &g << endl;
	cout << "gPtr = " << gPtr << endl << endl;


	//-------------------------------------------------------------------
	cout << "assign the address in one pointer to another" << endl
		<< "(point to the same address)" << endl;


	double* tPtr = &t;

	gPtr = tPtr;	//assign the address of tPtr to gPtr (both are double*) 
					//(gPtr point to address of t)


	cout << "g = " << g << endl;
	cout << "t = " << t << endl;
	cout << "*gPtr = " << *gPtr << endl;
	cout << "*tPtr = " << *tPtr << endl;
	cout << "gPtr = " << gPtr << endl;
	cout << "tPtr = " << tPtr << endl;
	cout << "The address of t is " << &t << endl << endl;
	return 0;
	system("pause");
	
}


