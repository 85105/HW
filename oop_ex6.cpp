// Simple I/O in C++
#include<iostream>

using namespace std;

int main()
{
	int count;
	cout << "Please enter how many times" << endl;
	cin >> count;

	for (int i = 0; i < count; i++)
	{
		cout << "Enter a character: ";
		char ch;
		cin >> ch;

		cout << "The int value of character '" << ch << "' is "
			<< (int)ch << endl;
	}

	system("pause");
}