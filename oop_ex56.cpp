/*
oop_ex56.cpp
destructor
*/

#include <iostream>

using namespace std;

class vector
{
	int* data;
	int size;
public:
	// constructors
	vector()
	{
		cout << "vector()" << endl;
		size = 0;
		data = new int[0];	//what if quote this line?  -> OK now, but NG before.
		//data = NULL;	//this also works.
	}

	vector(int s)
	{
		cout << "vector(int s)" << endl;
		size = s;
		data = new int[size];
	}

	// destructor
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
};


void main()
{
	vector v0;
	vector v1(1);
	vector v2(2);
	vector v3(3);

	vector* p0 = new vector();
	vector* p1 = new vector(1);
	vector* p2 = new vector(10);
	vector* p3 = new vector(100);
	vector* p4 = new vector(1000);

	// will not release momory without delete

	/*delete p0;
	delete p1;
	delete p2;
	delete p3;
	delete p4;*/


	//delete p0;  // can't call a destructor twice
	system("pause");
}