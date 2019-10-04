// oop_ex30: call by address in C++

#include <iostream>
#include <string>
using namespace std;

class User
{
public:
	string name;
	int age;
	User() { name = "Mike"; age = 22; }
};

double fun(double* a, User* u)
{
	*a *= 10;
	//u = new User();	//Activate this line. What happen? Why?
	(*u).name = "John";
	(*u).age = 30;

	cout << "in fun: (*a) = " << (*a) << endl
		<< "        (*u).name = " << (*u).name << endl
		<< "        (*u).age = " << (*u).age << endl << endl;

	return (*a);
}

void main()
{
	double a = 0.1;
	User u;

	cout << "before calling fun: a = " << a << endl
		<< "                    u.name = " << u.name << endl
		<< "                    u.age = " << u.age << endl << endl;

	double b = fun(&a, &u);
	// or
	//double* aptr = &a;
	//User* uptr = &u;
	//double b = fun(aptr, uptr);

	cout << "after calling fun: a = " << a << endl
		<< "                   u.name = " << u.name << endl
		<< "                   u.age = " << u.age << endl
		<< "                   b = " << b << endl;

	system("pause");
}


