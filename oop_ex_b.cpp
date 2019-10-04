// oop_ex_b.cpp: Access control in C++.

#include <iostream>

using namespace std;

class vector
{
private:
	double x;
protected:
	double y;
public:
	double z;

	void setData(double xx, double yy, double zz)
	{
		x = xx;
		y = yy;
		z = zz;
	}

	void print()
	{
		cout << "x = " << x << endl;
		cout << "y = " << y << endl;
		cout << "z = " << z << endl << endl;
	}
};

class subvector : public vector
{
public:
	void setData(double xx, double yy, double zz)
	{
		//x = xx;
		y = yy;
		z = zz;
	}

	void print()
	{
		//cout<<"x = " << x <<endl;
		cout << "y = " << y << endl;
		cout << "z = " << z << endl << endl;
	}
};



void main()
{
	vector v1;
	v1.print();

	v1.setData(10, 10, 10);
	v1.print();

	//v1.x = 20;
	//v1.y = 20;
	v1.z = 20;
	v1.print();

	subvector v2;
	v2.setData(30, 30, 30);
	v2.print();

	//v2.x = 40;
	//v2.y = 40;
	v2.z = 40;
	v2.print();
	system("pause");
}