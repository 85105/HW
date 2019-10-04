// oop_ex9.cpp : file I/O in C++
#include <iostream>
#include <fstream>  // hearder file for file I/O
using namespace std;

int main()
{
	double data[50];
	double buffer;
	int count = 0;

	ifstream fcin = ifstream("data9.txt");

	ofstream fcout = ofstream("ans9.txt");

	while (fcin >> buffer)
	{
		data[count] = buffer;
		count++;
	}

	for (int i = 0; i < count; i++)
	{
		fcout << data[i] << endl;
	}

	system("pause");
}