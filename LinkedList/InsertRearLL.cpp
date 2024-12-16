#include<iostream>
using namespace std;

class Node {
public:
	int item;
	Node* next;
};

void push(Node** head, int data)
{

	Node* newnode = new Node;
	newnode->item = data;
	newnode->next = *head;
	*head = newnode;
	

}

void printlist(Node* head)
{
	Node* temp = head;
	while (temp!= NULL)
	{
		cout << temp->item << "\n";
		temp = temp->next;
	}
}

/*int main()
{
	Node* head = NULL;
	push(&head, 1);
	push(&head, 2);
	push(&head, 3);
	push(&head, 4);
	push(&head, 5);
	printlist(head);
	return 0;

}*/