#include <iostream>

using namespace std;

class Node {
	public:
		int data;
		Node *next;
};

// add a node to the front
void push(Node **head_ref, int data) {
	// create a new temp node
	Node *new_node = new Node();
	// set new node data to be passed data
	new_node->data = data;
	// the next value is the current head
	new_node->next = (*head_ref);
	// and new head is the new node
	(*head_ref) = new_node;
}

void insert_after(Node* prev_node, int data) {
	// if the previous node is null send error
	if (prev_node == NULL) {
		cout << "prev node cannot be null";
		return;
	}
	// init a new node
	Node* new_node = new Node();
	// set new node data to be passed data
	new_node->data = data;
	// new node next is the previous node next
	new_node->next = prev_node->next;
	// previous node next is new node
	prev_node->next = new_node;
}

void append(Node** head_ref, int data) {
	// init node
	Node *new_node = new Node();
	// last node is head
	Node *last = *head_ref;
	// set the new node data to be data
	new_node->data = data;
	// since the new node is at the end of the list it's next value is null
	new_node->next = NULL;

	// if the head is null then the head is just the new node
	if (*head_ref == NULL) {
		*head_ref = new_node;
		return;
	}

	// otherwise traverse the list until you get to the end
	while (last->next != NULL) {
		last = last->next;
	}

	// when you at the end set the new last value to be new node
	last->next = new_node;
	return;
}

// traverse the list to print all values
void print_list(Node *head_ref) {
	Node *node = head_ref;
	cout << "[ ";
	while(node != NULL) {
		cout << node->data << " ";
		node = node->next;
	}
	cout << "]" << endl;
}

int main() {
	// init the value of the node
	Node *head = new Node();

	// push values to the list
	push(&head, 1);
	push(&head, 2);
	push(&head, 3);
	push(&head, 4);

	// output the list
	print_list(head);
}
