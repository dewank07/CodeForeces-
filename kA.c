
#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node* next;
};

void arrange(struct Node* head)
{
	struct Node* temp = head;
	deque<int> d; // defining a deque

	while (temp != NULL) {
		d.push_back(temp->data);
		temp = temp->next;
	}

	int i = 0;
	temp = head;
	while (!d.empty()) {
		if (i % 2 == 0) {
			temp->data = d.front();
			d.pop_front();
		}
		else {
			temp->data = d.back();
			d.pop_back();
		}
		i++;
		temp = temp->next; 
	}
}
void push(struct Node** head_ref, char new_data)
{
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}
void printList(struct Node* head)
{
	struct Node* temp = head;
	while (temp != NULL) {
		printf("%d ", temp->data);
		temp = temp->next;
	}
}

int main()
{
	struct Node* head = NULL;

	push(&head, 5);
	push(&head, 4);
	push(&head, 3);
	push(&head, 2);
	push(&head, 1);
	cout << "Given linked list\t";
	printList(head);
	arrange(head);
	cout << "\nAfter rearrangement\t";
	printList(head);
	return 0;
}
