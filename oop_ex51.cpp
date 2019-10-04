/*
oop_ex51.cpp :
Adding a new data member to class User in oop_ex50.cpp
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

ifstream cin_from_file = ifstream("data51.txt");

int dcount = 10000;

class User
{
	string name;
	int age;
	int tel;
	int id;		// add a new data member
public:
	void initdata()
	{
		cin_from_file >> name;
		cin_from_file >> age;
		cin_from_file >> tel;
		id = dcount++;
	}

	void setdata(const char*, int, int);

	// can/should add a new function member for this change
	void setdata(const char*, int, int, int);

	void printdata()
	{
		cout << name << " " << age << " " << tel << " " << id << endl;
	}
};


void main()
{
	int i;
	User userObject;

	userObject.setdata("Micheal", 20, 1234567);

	cout << "               name | age | tel" << endl;
	cout << "  userObject:  ";
	userObject.printdata();


	//---------------------------------------------------------------------


	User userArray[5];

	// read in the data from data51.txt
	for (i = 0; i<5; i++)
	{
		userArray[i].initdata();
	}

	// display the data
	for (i = 0; i<5; i++)
	{
		cout << "userArray[" << i << "]: ";
		userArray[i].printdata();
	}


	//---------------------------------------------------------------------

	User userObject2;

	// initialize using the new function
	userObject2.setdata("Mark", 40, 7654321, 20000);

	cout << "  userObject2:  ";
	userObject2.printdata();
	system("pause");
}


void User::setdata(const char* n, int a, int t)
{
	name= n;
	age = a;
	tel = t;
	id = dcount;
	dcount++;
}


// new function member for this change
void User::setdata(const char* n, int a, int t, int i)
{
	name = n;
	age = a;
	tel = t;
	id = i;
}
