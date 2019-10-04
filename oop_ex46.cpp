// oop_ex46.cpp
// Function member vs. function for structure data

#include <iostream>
#include <cmath>

using namespace std;

struct point
{
	double x;
	double y;

	double distTo(point p);
};


double distBetween(point p1, point p2)
{
	double dx = p1.x - p2.x;
	double dy = p1.y - p2.y;
	double dist = sqrt(dx*dx + dy * dy);
	return dist;
}



void main()
{
	point p1, p2, p3;

	cout << "Please enter point 1:" << endl;
	cin >> p1.x >> p1.y;
	cout << endl << "Please enter point 2:" << endl;
	cin >> p2.x >> p2.y;
	cout << endl << "Please enter point 3:" << endl;
	cin >> p3.x >> p3.y;


	// using distBetween function
	cout << "The distance between point 1 and point 2 is "
		<< distBetween(p1, p2) << endl;

	cout << "The distance between point 2 and point 3 is "
		<< distBetween(p2, p3) << endl;

	cout << "The distance between point 1 and point 3 is "
		<< distBetween(p1, p3) << endl << endl;


	// using distTo member function  
	cout << "For point 1, the distance to point 2 is "
		<< p1.distTo(p2) << endl;

	cout << "For point 2, the distance to point 3 is "
		<< p2.distTo(p3) << endl;

	cout << "For point 3, the distance to point 1 is "
		<< p3.distTo(p1) << endl;
	system("pause");
}

double point::distTo(point p)
{
	double dx = x - p.x;
	double dy = y - p.y;
	double dist = sqrt(dx*dx + dy * dy);
	return dist;
}