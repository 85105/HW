/*
oop_ex52.cpp :
Classes and Data Encapsulation
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Sphere
{
	string id;
	double x, y, z;
	double radius;
	string color;
public:
	void setdata(string i, double xx, double yy, double zz, double ra, string co)
	{
		id = i;
		x = xx;	y = yy; z = zz;
		radius = ra;
		color = co;
	}

	void printdata()
	{
		cout << "id=" << id
			<< ", (x,y,z)=" << "(" << x << "," << y << "," << z
			<< "), radius=" << radius
			<< ", color=" << color << endl;
	}

	void draw()
	{
		//do things to display itself on the viewport
	}
};


void main()
{
	Sphere s1, s2, s3;

	s1.setdata("S001", 0, 0, 0, 5, "red");
	s2.setdata("S002", 10, 10, 0, 5, "green");
	s3.setdata("S003", -10, -10, 0, 5, "blue");

	s1.printdata();
	s2.printdata();
	s3.printdata();
	system("pause");
}


