/*
oop_ex15.cpp
const and pointer
*/

#include <iostream>

using namespace std;

void main()
{
	int x = 10, y = 100;

	//��Ū����
	const int* p1 = &x;

	p1 = &y;
	//*p1 = y;		//illegal operation
	//*p1 += 5;		//illegal operation
	x = *p1;
	p1++;


	//�`�ƻݨϥΰ�Ū����
	const int z = 1;
	//int* p0 = &z;
	const int* p0 = &z;


	//�w�}���� 
	int *const p2 = &x;

	//p2 = &y;		//illegal operation
	*p2 = y;
	*p2 += 5;
	x = *p2;
	//p2++;			//illegal operation

	system("pause");
}
