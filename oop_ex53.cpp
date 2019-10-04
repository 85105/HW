/*
oop_ex53.cpp :
Changing a data member of class Sphere in oop_ex52
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
	//string color;
	double r, g, b;
public:
	void setdata(string i, double xx, double yy, double zz, double ra, string co)
	{
		id = i;
		x = xx;	y = yy; z = zz;
		radius = ra;
		//color = co;
		if (co == "red")
		{
			r = 1; g = 0; b = 0;
		}
		else if (co == "green")
		{
			r = 0; g = 1; b = 0;
		}
		else if (co == "blue")
		{
			r = 0; g = 0; b = 1;
		}
	}

	// can/should also add a new function member for this change
	void setdata(string i, double xx, double yy, double zz,
		double ra, double rr, double gg, double bb)
	{
		id = i;
		x = xx;	y = yy; z = zz;
		radius = ra;
		r = rr;	g = gg; b = bb;
	}

	void printdata()
	{
		cout << "id=" << id
			<< ", (x,y,z)=" << "(" << x << "," << y << "," << z
			<< "), radius=" << radius
			//<<", color="<<color<<endl;		
			<< ", color=" << "(" << r << "," << g << "," << b << ")" << endl;
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

	//------------------------------------------

	// using the new setdata function member
	Sphere s4;
	s4.setdata("S004", -10, +10, 0, 5, 1, 1, 1);
	s4.printdata();
	system("pause");
}
