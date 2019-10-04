/*
oop_ex20.cpp
Array and Pointer
*/


#include <iostream>

using namespace std;

int main()
{
	int num[5] = { 1,2,3,4,5 };
	cout << num << endl;

	int* ptr = num;			// The name of an array is a pointer which
							// point to the address of the first element in num array
							//int *ptr = &num[0];	// <= equivalent to this

							//num++;				//cannot point num to other address
							//num+=2;				//again, cannot point num to other address
							//num = &num[4];		//again, cannot point num to other address
	cout << *(num + 4) << endl;	//This is OK since num doesn't move.


	for (int i = 0; i<5; i++)
		cout << num[i] << " ";	//basic array element accessing

	cout << endl;

	for (int i = 0; i<5; i++)
		cout << ptr[i] << " ";	//see, [ ] can also apply to pointer

	cout << endl;

	for (int i = 0; i<5; i++)
		cout << *ptr++ << " ";	//can do ++ operation on ptr

	cout << endl;

	//for(int i=0; i<5; i++)
	//	cout<<*num++<<" ";	//but cannot do ++ operation on num

	cout << endl;

	for (int i = 0; i<5; i++)
		cout << ptr[i] << " ";	//explain why?

	cout << endl;

	system("pause");

}

