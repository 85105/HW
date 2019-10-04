//	oop_ex60.cpp: "=" copy assignment operator
//	vs oop_ex59.cpp


#include <iostream>

using namespace std;

class vector
{
	int* data;
	int size;
public:
	vector()
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

		//data = v.data;

		data = new int[size];
		for (int i = 0; i<size; i++)
			data[i] = v.data[i];
	}
	//-----------------------------------------------

	//copy assignment operator-----------------------
	vector& operator=(const vector& v)
	{
		cout << "vector& operator=(const vector& v)" << endl;

		if (this != &v)
		{
			delete data;
			size = v.size;

			//data = v.data;

			data = new int[size];
			for (int i = 0; i<size; i++)
				data[i] = v.data[i];
		}

		return *this;
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

	void printDataAddress()  //print the address of allocated data
	{
		cout << data << endl;
	}
};


void main()
{
	vector* p1 = new vector(10);
	vector* p2 = new vector;

	cout << "the data of p1 : ";
	p1->print();
	cout << "the data of p2 : ";
	p2->print();

	(*p2) = (*p1);

	cout << "the data of p1 : ";
	p1->print();
	cout << "the data of p2 : ";
	p2->print();

	cout << "the data address of p1 : ";
	p1->printDataAddress();
	cout << "the data address of p2 : ";
	p2->printDataAddress();


	vector p3 = (*p1);	 //call copy constructor (not default constructor + copy assignment operator)
	//vector p3(*p1);		 // <= equivalent to this

	p3 = (*p2);			 //call copy assignment operator


	delete p1;
	delete p2;
	system("pause");
}