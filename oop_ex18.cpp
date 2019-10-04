/*
oop_ex18.cpp
Declaring Arrays and accessing array elements
*/


#include <iostream>

using namespace std;
int main()
{
	int m = 10;
	const int n = 10;

	int num[10];	// array length is int value, OK
					//int num[m];	// array length is a variable, NG
					//int num[n];		// array length is a constant, OK

	for (int i = 0; i<10; i++)
	{
		num[i] = i;		// assign value to the array element
	}


	for (int j = 0; j<10; j++)
	{
		cout << "num[" << j << "] = " << num[j] << endl;	//retrive value from array element
	}

	cout << endl << num[50] << endl;	//this is allowed in C++

	system("pause");
}