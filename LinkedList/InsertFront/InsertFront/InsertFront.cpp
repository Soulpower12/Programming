#include <iostream>
using namespace std;

class Node
{
public:
	int item;
	Node* link;
};

void push(Node** head,int data)
{
	Node* newnode = new Node;
	newnode->item = data;
	newnode->link = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		return;
	}

	Node* temp = *head;
	while (temp->link != NULL)
	{
		temp = temp->link;
	}
	temp->link = newnode;


}

void ReverseList(Node** head)
{
	Node* prev = NULL;
	Node* next = NULL;
	Node* cur = *head;
	while (cur != NULL)
	{
		next = cur->link;
		cur->link = prev;
		prev = cur;
		cur = next;
	}
	*head = prev;
}

void printlist(Node** head)
{
	Node* temp = *head;
	while (temp != NULL)
	{
		cout << temp->item<<"\n";
		temp = temp->link;
	}
}

int main()
{
	Node* head = NULL;

	push(&head, 1);
	push(&head, 2);
	push(&head, 3);
	push(&head, 4);
	push(&head, 5);
	
	//printlist(&head);
	ReverseList(&head);
	cout << "\nAfter Reverse\n";
	printlist(&head);
	return 0;
}