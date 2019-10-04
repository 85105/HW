// oop_ex1.cpp: A simple C++ program

#include <iostream>

using namespace std;

int addarry(int* a, int n);

void main()
{
	int data[] = { 1, 4, 7 };
	int size = sizeof(data) / sizeof(data[0]);

	cout << "The sum is "
		<< addarry(data, size)
		<< endl;

	system("pause");
}

int addarry(int* a, int n)
{
	int result = 0;
	int i;

	for (i = 0; i < n; i++)
	{
		result += a[i];
	}

	return result;
}