// oop_ex57: Default Constructor

#include <iostream>
#include <string>
using namespace std;


class account
{
	string name;
	//char* name;            //change string to char*. What happen?
	int acc_number;
	double balance;
public:
	/*	//account(){}

	account(string n, int a, double b)
	{
		name = n;
		acc_number = a;
		balance = b;
	}*/
	

	void print()
	{
		cout<<"name = "<<name<<endl;	
		cout << "acc_number = " << acc_number << endl;
		cout << "balance = " << balance << endl;
	}
};

void main()
{
	account x;
	x.print();

	account y[10];
	system("pause");
}