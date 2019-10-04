/*
oop_ex54.cpp
Constructors
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

ifstream cin_from_file = ifstream("data54.txt");

int id_count = 10000;

class User
{
	string name;
	int age;
	int tel;
	int id;
public:
	//void User()	//should have no arguments, and no return type.
	User()	//What if default constructor is not present? 
	{
		//cout<<"User()"<<endl;
		cin_from_file >> name;
		cin_from_file >> age;
		cin_from_file >> tel;
		id = id_count++;
	}

	User(string, int, int, int);

	void printdata()
	{
		cout << name << " " << age << " " << tel << " " << id << endl;
	}
};


void main()
{
	User userObject1("Micheal", 20, 1234567, 20000);
	User* userPtr2 = new User("Scott", 22, 1234567, 20001);

	cout << "       name | age | tel" << endl;
	cout << "  user1:  ";
	userObject1.printdata();

	cout << "  user2:  ";
	userPtr2->printdata();

	//---------------------------------------------------------------------

	User userObject3;			//calling default constructor
	cout << "  user3:  ";
	userObject3.printdata();



	User userArr[5];		//calling default constructor(5 times)
	//User* userArr = new User[5];


	// display the data
	for (int i = 0; i<5; i++)
	{
		cout << "userArr[" << i << "]: ";
		userArr[i].printdata();
	}
	system("pause");
}


User::User(string n, int a, int t, int i)
{
	//cout<<"User(char* n, int a, int t, int i)"<<endl;
	name = n;
	age = a;
	tel = t;
	id = i;
}
