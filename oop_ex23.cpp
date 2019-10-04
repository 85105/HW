/*
oop_ex23.cpp
Release Allocated Memory
*/


#include <iostream>

using namespace std;

void printArray(int* a, int s)
{
	if (a == NULL)
	{
		cout << "The array is empty" << endl;
		return;
	}

	for (int i = 0; i<s; i++)
		cout << *a++ << " ";

	cout << endl;
}

void main()
{
	int size = 0;
	int *p;

	cout << "Please enter the length of the array. <=0 to Quit." << endl;
	cin >> size;

	//delete p;		//1.

	while (size >0)
	{
		p = new int[size];		//2.

		cout << "after new, p = " << p << endl;

		for (int i = 0; i<size; i++)
			p[i] = i;

		printArray(p, size);

		delete p;		//4. 5.

		cout << "after delete, p = " << p << endl;	//3.
													//p = NULL;		

		printArray(p, size);

		cout << "Please enter the length of the array. <=0 to Quit." << endl;
		cin >> size;
	}

	system("pause");
}