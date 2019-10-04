/*
cpp_ex19.cpp
Initialization of Arrays
*/


#include <iostream>

using namespace std;

int main()
{
	int arr[3];	//C++ arrays are not initialized
	for (int k = 0; k<3; k++)
		cout << "arr[" << k << "] = " << arr[k] << endl;


	const int arraySize = 10;	//try = 5
	int num[arraySize] = { 1, 2, 3, 4, 5, 6 };

	for (int i = 0; i<arraySize; i++)
	{
		cout << "num[" << i << "] = " << num[i] << endl;
	}

	cout << num << endl; //see the output, recall anything?


	int data[] = { 11,12,13,14,15 };

	for (int j = 0; j<5; j++)
		cout << "data[" << j << "] = " << data[j] << endl;

	system("pause");
}