/*
oop_ex55.cpp
Constructor with default arguments
*/

#include <iostream>

using namespace std;

class Time
{
	int hour;
	int minute;
	int second;

public:
	Time(int h = 0, int m = 0, int s = 0)	//equivalent to 4 constructors
	{
		hour = h;
		minute = m;
		second = s;
	}

	//Time(){}

	void print12HR();
	void print24HR();
	void addTime(int h, int m, int s);
};



void main()
{
	//Time showtime;
	//showtime.hour = 21;
	//showtime.minute = 30;
	//showtime.second = 0;

	Time showtime;					//default constructor
	//Time showtime(12);
	//Time showtime(21,30);
	//Time showtime(18,18,18);

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
	cout << "<12HR>";
	if (hour > 12)
		cout << hour - 12 << ":" << minute << ":" << second << " PM" << endl;
	else
		cout << hour << ":" << minute << ":" << second << " AM" << endl;
}

void Time::print24HR()
{
	cout << "<24HR>";
	cout << hour << ":" << minute << ":" << second << endl;
}

void Time::addTime(int h, int m, int s)
{
	hour += h;
	minute += m;
	second += s;
}