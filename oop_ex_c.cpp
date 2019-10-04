//oop_ex_c.cpp: data members can be protected by function members


#include <iostream>

using namespace std;

class Time
{
	//public:
	int hour;
	int minute;
	int second;

public:
	void setHour(int h) { hour = ((h<24 && h >= 0) ? h : 0); }
	int getHour() { return hour; }

	void setMinute(int m) { minute = ((m<60 && m >= 0) ? m : 0); }
	int getMinute() { return minute; }

	void setSecond(int s) { second = ((s<60 && s >= 0) ? s : 0); }
	int getSecond() { return second; }

	void setTime(int h, int m, int s)
	{
		hour = ((h<24 && h >= 0) ? h : 0);
		minute = ((m<60 && m >= 0) ? m : 0);
		second = ((s<60 && s >= 0) ? s : 0);
	}

	void print12HR()
	{
		if (hour > 12)
			cout << hour - 12 << ":" << minute << ":" << second << " PM" << endl;
		else
			cout << hour << ":" << minute << ":" << second << " AM" << endl;
	}

	void print24HR()
	{
		cout << hour << ":" << minute << ":" << second << endl;
	}
};



void main()
{
	Time showtime;

	/*
	showtime.hour = 50;
	cout<<showtime.hour<<endl;

	showtime.hour = 21;
	showtime.minute = 30;
	showtime.second = 0;

	showtime.print12HR();
	showtime.print24HR();

	showtime.hour = 23;
	showtime.minute = 70;
	showtime.second = -10;

	Time* p = &showtime;
	p->print12HR();
	p->print24HR();
	*/
	//=========================

	showtime.setHour(50);
	cout << showtime.getHour() << endl;

	showtime.setTime(21, 30, 0);

	showtime.print12HR();
	showtime.print24HR();

	showtime.setTime(23, 70, -10);

	Time* p = &showtime;
	p->print12HR();
	p->print24HR();
	system("pause");
}

