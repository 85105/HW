// oop_ex48.cpp
// Recursive Structure Definition


#include <iostream>

using namespace std;

struct Node
{
	int data;
	Node* next;
};


void printList(Node* s);


void main()
{
	Node* start = new Node;		//point to 1st element
	Node* end;					//point to last element
	end = start;				//only one node initially, end = start

	cout << "Please input the 1st data." << endl;
	cin >> start->data;


	int flag = 1;

	while (flag != 0)
	{
		cout << "Do you want to input and save more data?" << endl
			<< "input 0 for NO, other integer for YES" << endl;

		cin >> flag;

		if (flag == 0)
		{
			end->next = NULL;
		}
		else
		{
			Node* newNode = new Node;
			cout << "Please input the data." << endl;
			cin >> newNode->data;

			end->next = newNode;
			end = newNode;
		}
	}


	printList(start);
	system("pause");
}


void printList(Node* s)
{
	Node* current = s;

	while (current != NULL)
	{
		cout << current->data << " ";
		current = current->next;
	}

	cout << endl;
}