/*
oop_ex45.cpp
Structure with Function Members  (format 2)
*/

#include <iostream>

using namespace std;

struct Time
{
	int hour;
	int minute;
	int second;

	void print12HR();
	void print24HR();
	void addTime(int h, int m, int s);
};



void main()
{
	Time showtime;
	showtime.hour = 21;
	showtime.minute = 30;
	showtime.second = 0;

	showtime.print12HR();
	showtime.print24HR();

	showtime.addTime(2, 10, 0);

	Time* p = &showtime;

	p->print12HR();
	p->print24HR();
	system("pause");
}


//void print12HR()
void Time::print12HR()
{
	if (hour > 12)
		cout << hour - 12 << ":" << minute << ":" << second << " PM" << endl;
	else
		cout << hour << ":" << minute << ":" << second << " AM" << endl;
}

void Time::print24HR()
{
	cout << hour << ":" << minute << ":" << second << endl;
}

void Time::addTime(int h, int m, int s)
{
	hour += h;
	minute += m;
	second += s;
}