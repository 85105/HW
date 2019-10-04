//	oop_ex58.cpp: Copy Constructors


#include <iostream>

using namespace std;

class vector
{
	int* data;
	int size;
public:
	vector()	//default constructor
	{
		cout << "vector()" << endl;
		size = 0;
		data = new int[size];
	}

	vector(int s)
	{
		cout << "vector(int s)" << endl;
		size = s;
		data = new int[size];

		for (int i = 0; i<size; i++)
			data[i] = size;
	}

	//copy constructor------------------------------
	vector(const vector& v)
	{
		cout << "vector(const vector& v)" << endl;
		size = v.size;

		data = new int[size];
		for (int i = 0; i<size; i++)
			data[i] = v.data[i];

		//data = v.data;	//error: can't copy pointer member directly
	}
	//-----------------------------------------------

	~vector()
	{
		cout << "~vector()  size=" << size << endl;
		delete[] data;
	}

	void print()
	{
		for (int i = 0; i<size; i++)
			cout << data[i] << " ";

		cout << endl;
	}

	void printDataAddress()  //print the address of the allocated data array
	{
		cout << data << endl;
	}
};


void main()
{
	vector* p1 = new vector(10);
	vector* p2 = new vector(*p1);    //calling copy constructor

	cout << "the data of p1 : ";
	p1->print();
	cout << "the data of p2 : ";
	p2->print();

	cout << "the data address of p1 : ";
	p1->printDataAddress();
	cout << "the data address of p2 : ";
	p2->printDataAddress();

	delete p1;
	delete p2;
	system("pause");
}