//oop_ex37.cpp  passing arrays in C++

#include <iostream>
using namespace std;

double fun(double a, int arr[], int size)
//double fun(double a, int* arr, int size)		//same as above
{
	a *= 10;
	//arr = new int[10];	//Activate this line. What happen? Why?
	for (int i = 0; i<size; i++)
		arr[i] *= 10;

	cout << "in fun: a = " << a << endl;
	cout << "  arr[] = " << endl;;
	for (int i = 0; i<size; i++)
		cout << arr[i] << " ";
	cout << endl << endl;

	return a;
}


void main()
{
	double a = 0.1;
	const int size = 5;
	int arr[size];
	for (int i = 0; i<size; i++)
		arr[i] = i * 10;

	cout << "before calling fun: a = " << a << endl;
	cout << "  arr[] = " << endl;;
	for (int i = 0; i<size; i++)
		cout << arr[i] << " ";
	cout << endl << endl;

	double b = fun(a, arr, size);
	//double b = fun(a, &arr[0], size);		//same as above

	cout << "after calling fun: a = " << a << endl;
	cout << "  arr[] = " << endl;;
	for (int i = 0; i<size; i++)
		cout << arr[i] << " ";
	cout << endl << endl;

	system("pause");
}


