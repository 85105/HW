/*
oop_ex47.cpp
Structure variables as data member
*/


#include <iostream>
#include <string>
using namespace std;

//struct Team;

struct Person
{
	string name;
	int tel;

	//recursive structure definition
	//Person p;		//NG 
	//Person* p;	//OK

	//what if Team has not define yet?
	//Team t;		//NG		
	//Team* t;		//OK

	void print()
	{
		cout << "name = " << name << " tel = " << tel << endl;
	}
};


struct Team
{
	string name;
	Person p1;
	Person p2;

	void print()
	{
		cout << "team name = " << name << endl;
		cout << "team member : " << endl;
		p1.print();
		p2.print();
	}
};


void main()
{
	Team t;
	t.name = "NTUST";
	t.p1.name = "Mike";
	t.p1.tel = 7777777;
	t.p2.name = "John";
	t.p2.tel = 3333333;

	//t.p1.t = &t;

	t.print();
	cout << endl;

	t.p1.print();
	cout << endl;

	//t.p1.t->print();
	system("pause");
}
