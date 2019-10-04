/*
oop_ex14.cpp
arithmetic operations (++,--,+=,-=, +, -) for pointer
*/


#include <iostream>

using namespace std;

void main()
{
	int i;
	int num[5] = { 1,3,5,7,9 };

	//point ptr to the address of the first element in num array
	int *ptr = &num[0];


	for (i = 0; i<5; i++)
	{
		//cout<<*ptr++<<" ";	
		//equal to the following
		cout << *ptr << " ";
		ptr++;

		//not equal to the following
		//cout<<(*ptr)++<<" ";
	}
	cout << endl;

	for (i = 0; i<5; i++)
	{
		ptr--;
		cout << *ptr << " ";
	}
	cout << endl;

	ptr += 4;
	cout << *ptr << endl;

	ptr -= 4;
	cout << *ptr << endl;


	cout << *(ptr + 2) << endl;
	cout << *ptr << endl;

	system("pause");

}

