// oop_ex22.cpp
// Dynamic Memory Allocation:
// return an array created in function


#include <iostream>
#include <stdlib.h>

using namespace std;

void printArray(int a[], int size)
{
	for (int i = 0; i<size; i++)
		cout << a[i] << " ";

	cout << endl;
}

int* VaddV(int a[], int b[], int size)
{
	//int ans[100];
	int* ans = new int[size];

	for (int i = 0; i<size; i++)
		ans[i] = a[i] + b[i];

	return ans;
}


int main()
{
	int v1[3] = { 1, 2, 3 };
	int v2[3] = { 3, 2, 1 };

	int* ans;

	ans = VaddV(v1, v2, 3);

	cout << "v1 = ";
	printArray(v1, 3);

	cout << "v2 = ";
	printArray(v2, 3);

	cout << "v1 + v2 = ";
	printArray(ans, 3);

	//delete [] ans;

	system("pause");
}