#include <iostream>
using namespace std;

class Node {
public:
	int item;
	Node* next;
};

Node* head = NULL;
void push(int data)
{

	Node* newnode = new Node;
	newnode->item = data;
	newnode->next = NULL;
	if (head == NULL)
	{
		head = newnode;
		return;
	}

	Node* temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newnode;
}

void printlist()
{
	Node* temp = head;
	while (temp != NULL)
	{
		cout << temp->item << " ";
		temp = temp->next;
	}
}

int main()
{
	for (int i = 0; i < 5; i++)
		push(i);

	printlist();
	return 0;
}