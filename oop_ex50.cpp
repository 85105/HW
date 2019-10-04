/*
	Classes and Data Encapsulation: 
	Modification of oop_ex50.cpp to enable Data Encapsulation
*/

#include <iostream>
#include <fstream>
#include <string>


using namespace std;

ifstream cin_from_file = ifstream("data50.txt");

class User
{
	string name;
	int age;
	int tel;
public:		
	void initdata()
	{
		cin_from_file >> name;
		cin_from_file >> age;
		cin_from_file >> tel;
	}

	void setdata(string, int, int);

	void printdata()
	{
		cout<<name<<" "<<age<<" "<<tel<<endl;
	}
};


void main()
{	
	int i;
	User userObject;
	
	//strcpy(userObject.name, "Micheal");
	//userObject.age = 20;
	//userObject.tel = 1234567;

	userObject.setdata("Micheal", 20, 1234567);

	cout<<"                name | age | tel"<<endl;
	//cout<<"  userObject:  "<<userObject.name<<" "<<userObject.age<<" "<<userObject.tel<<endl<<endl;
	cout<<"  userObject:  ";
	userObject.printdata();
	
	//---------------------------------------------------------------------
	

	User userArray[5];

	// read in the data from data50.txt
	for(i=0; i<5; i++)
	{
		//cin_from_file >> userArray[i].name;
		//cin_from_file >> userArray[i].age;
		//cin_from_file >> userArray[i].tel;
		userArray[i].initdata();
	}

	// display the data
	for(i=0; i<5; i++)
	{
		//cout<<"userArray["<<i<<"]: "<<userArray[i].name
		//	<<" "<<userArray[i].age<<" "<<userArray[i].tel<<endl;
		cout<<"userArray["<<i<<"]: ";
		userArray[i].printdata();
	}
	system("pause");
}


void User::setdata(string n, int a, int t)
{
	name = n;
	age = a;
	tel = t;
}
