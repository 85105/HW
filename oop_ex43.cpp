/*
oop_ex43.cpp
Passing Structure Variables to Functions
*/

#include <iostream>

using namespace std;

struct Time
{
	int hour;
	int minute;
	int second;
};

void print12HR(Time t);		//call by value
void print24HR(Time& t);	//call by reference

void print12HR(Time* t);	//call by address
void print24HR(Time* t);	//call by address



int main()
{
	Time showtime;
	showtime.hour = 21;
	showtime.minute = 30;
	showtime.second = 0;

	print12HR(showtime);
	print24HR(showtime);

	print12HR(&showtime);
	print24HR(&showtime);
	system("pause");
}

//call by value
void print12HR(Time t)
{
	cout << "print12HR(Time t): ";

	if (t.hour > 12)
		cout << t.hour - 12 << ":" << t.minute << ":" << t.second << " PM" << endl;
	else
		cout << t.hour << ":" << t.minute << ":" << t.second << " AM" << endl;
}

//call by reference
void print24HR(Time& t)
{
	cout << "print24HR(Time& t): ";
	cout << t.hour << ":" << t.minute << ":" << t.second << endl;
}

//call by address
void print12HR(Time* t)
{
	cout << "print12HR(Time* t): ";

	if (t->hour > 12)
		cout << t->hour - 12 << ":" << t->minute << ":" << t->second << " PM" << endl;
	else
		cout << t->hour << ":" << t->minute << ":" << t->second << " AM" << endl;
}

void print24HR(Time* t)
{
	cout << "print24HR(Time* t): ";
	cout << t->hour << ":" << t->minute << ":" << t->second << endl;
}




