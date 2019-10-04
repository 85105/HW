// oop_ex3.cpp: Scope and Hiding

#include <iostream>

using namespace std;

void main()
{
	int x = 5;
	cout << "1. x = " << x << endl;
	{
		int x = 50;
		cout << "2. x = " << x << endl;
		{
			int x = 500;
			cout << "3. x = " << x << endl;
		}
		cout << "4. x = " << x << endl;
	}
	cout << "5. x = " << x << endl;
	
	system("pause");
}
