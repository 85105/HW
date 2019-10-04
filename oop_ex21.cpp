/*
oop_ex21.cpp
Dynamic Memory Allocation
*/

#include <iostream>

using namespace std;

int main()
{
	//1. memory allocation for primitive types
	int *p1 = new int;
	double *p2 = new double(3.14159);

	cout << "*p1 = " << *p1 << endl;
	cout << "*p2 = " << *p2 << endl;


	//2. memory allocation for 1D arrays
	int *p3 = new int[10];
	//int p3[10];

	for (int i = 0; i<10; i++)
	{
		p3[i] = i;
	}
	cout << "p3[i]=" << endl;
	for (int i = 0; i<10; i++)
	{
		cout << p3[i] << " ";
		//cout<<*p3++<<" ";
	}
	//p3-=10;
	cout << endl;


	//3. memory allocation for multiple dimensional arrays
	double(*p4)[4] = new double[3][4];
	//double p4[3][4];

	for (int i = 0; i<3; i++)
	{
		for (int j = 0; j<4; j++)
			p4[i][j] = i + j * 0.1;
	}

	cout << "p4[3][4] = " << endl;
	for (int i = 0; i<3; i++)
	{
		for (int j = 0; j<4; j++)
			cout << p4[i][j] << " ";

		cout << endl;
	}


	cout << endl;


	//4. some error declarations
	//int *p5 = new int[];
	//double *p6 = new double[3][4];
	//double *p7[2][7] = new double[3][4][5];



	//5. check if the allocation is successful
	//if (p5 == NULL)
	//	cout << "allocation is not successful!" << endl;



	//6. create an array of int with the size assign by user
	cout << "Please enter the array size." << endl;
	int size;
	cin >> size;

	//int p8[size];
	int* p8 = new int[size];

	int(*p9)[10] = new int[size][10];
	//int (*p10)[size] = new int[size][size];

	for (int i = 0; i<size; i++)
		p8[i] = i;

	cout << "p8[i]=" << endl;
	for (int i = 0; i<size; i++)
		cout << p8[i] << " ";




	// release the memory allocation
	//!! can't delete an 'address' without memory allocated there.
	//p8 = p3;		// what happen?
	delete p1;
	delete p2;
	delete[] p3;	// what if no p3-=10;
	delete[] p4;

	delete[] p8;
	delete[] p9;

	system("pause");
}


