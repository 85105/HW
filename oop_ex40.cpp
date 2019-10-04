/*
oop_ex40.cpp
Structure
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/*
class User	//a structure is equivalent to a class with all its members declared public
{
public:
string name;
int age;
int tel;
};
*/

struct User
{
	string name;
	//char* name = new char[20]; //can't do dynamic memory allocation in definition			
	int age;
	//int age =18;			//can't initialize member in definition
	int tel;
};


void main()
{
	User userObject;

	userObject.name = "Micheal";

	//cout<<"please enter a name."<<endl;	
	//cin>>userObject.name;


	userObject.age = 20;
	userObject.tel = 1234567;

	cout << "              name | age | tel" << endl;
	cout << "  userObject: " << userObject.name << " " << userObject.age << " " << userObject.tel << endl << endl;;


	//---------------------------------------------------------------------

	ifstream cin_from_file = ifstream("data40.txt");

	User userArray[5];

	// read in the data from data55.txt
	for (int i = 0; i<5; i++)
	{
		cin_from_file >> userArray[i].name;
		cin_from_file >> userArray[i].age;
		cin_from_file >> userArray[i].tel;
	}

	// display the data
	for (int i = 0; i<5; i++)
	{
		cout << "userArray[" << i << "]: " << userArray[i].name
			<< " " << userArray[i].age << " " << userArray[i].tel << endl;
	}
	system("pause");
}