/*
oop_ex41.cpp
accessing data members through pointer
*/

#include <iostream>
#include <string>

using namespace std;

struct User
{
	string name;
	int age;
	int tel;
};


void main()
{

	User userObject;
	User* userPtr = &userObject;

	//User* userPtr = new User();

	userPtr->name = "Micheal";
	userPtr->age = 20;
	userPtr->tel = 1234567;

	cout << "                name | age | tel" << endl;
	cout << "  userObject:  " << userPtr->name << " " << userPtr->age << " " << userPtr->tel << endl << endl;;
	cout << "  userObject:  " << (*userPtr).name << " " << (*userPtr).age << " " << (*userPtr).tel << endl << endl;;
	system("pause");
}