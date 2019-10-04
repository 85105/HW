/*
oop_ex42.cpp   (compare to oop_ex40.cpp)
Memory Allocation for Structure, Part 2
*/

#include <iostream>
#include <fstream>
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
	//User userObject;
	User* userPtr = new User;	//Dynamic Memory allocation

	userPtr->name = "Micheal";

	userPtr->age = 20;
	userPtr->tel = 1234567;

	cout << "             name | age | tel" << endl;
	cout << "  userPtr:  " << userPtr->name << " " << userPtr->age << " " << userPtr->tel << endl << endl;;


	//---------------------------------------------------------------------

	ifstream cin_from_file = ifstream("data42.txt");

	//User userArray[5];
	User* userArray = new User[5];	 // allocate an array

									 // read in the data from data42.txt
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


	// release the allocated memory
	delete userPtr;
	delete[] userArray;
	system("pause");
}