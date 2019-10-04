//oop_ex_d.cpp: 


#include <iostream>

using namespace std;

class Time
{
	int hour;
	int minute;
	int second;

public:
	void setHour(int h) { hour = ((h<24 && h >= 0) ? h : 0); }
	int& getHour() { return hour; }

	void setMinute(int m) { minute = ((m<60 && m >= 0) ? m : 0); }
	int* getMinute() { return &minute; }

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

	showtime.setTime(21, 30, 0);

	showtime.print12HR();
	showtime.print24HR();

	int& h = showtime.getHour();
	int* m = showtime.getMinute();
	int s = showtime.getSecond();

	h = 50;
	*m = 100;
	s = 200;

	showtime.print12HR();
	showtime.print24HR();
	system("pause");
}

