/*
oop_ex17.cpp
Reference in ++
*/


#include <iostream>

using namespace std;

void main()
{
	int a = 3, b = 100;
	int& a_ref = a;
	int* a_ptr = &a;

	cout << "The address of a is" << &a << endl;
	cout << "The address of a_ref is" << &a_ref << endl;
	cout << "The value of a_ptr is" << a_ptr << endl << endl;


	cout << "a = " << a << endl;
	cout << "a_ref = " << a_ref << endl;
	cout << "*a_ptr = " << *a_ptr << endl << endl;

	a_ref++;

	cout << "after a_ref++" << endl;
	cout << "a = " << a << endl;
	cout << "a_ref = " << a_ref << endl;
	cout << "*a_ptr = " << *a_ptr << endl << endl;


	a_ref = b;

	cout << "a_ref = b" << endl;
	cout << "a = " << a << endl;
	cout << "a_ref = " << a_ref << endl;
	cout << "*a_ptr = " << *a_ptr << endl << endl;


	a++;

	cout << "after a++" << endl;
	cout << "a = " << a << endl;
	cout << "a_ref = " << a_ref << endl;
	cout << "*a_ptr = " << *a_ptr << endl << endl;


	(*a_ptr)++;
	//*a_ptr++;
	//*a_ptr;   a_ptr++;

	cout << "after (*a_ptr)++" << endl;
	cout << "a = " << a << endl;
	cout << "a_ref = " << a_ref << endl;
	cout << "*a_ptr = " << *a_ptr << endl << endl;



	cout << "The memory size of a is " << sizeof(a) << " Bytes" << endl;
	cout << "The memory size of a_ref is " << sizeof(a_ref) << " Bytes" << endl;

	system("pause");
}
