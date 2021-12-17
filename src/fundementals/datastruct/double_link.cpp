#include <iostream>

using namespace std;

// non circular
struct Node {
	int data;
	struct Node *before;
	struct Node *after;
};

void push(Node *head, int data) {
	// init new node
	Node *new_node = new Node();
	// set the data to be the passed value
	new_node->data = data;

	// before node is null because it's not circular
	new_node->before = NULL;
	// the node after the new node is the current head
	new_node->after = head;
	// before the current head is the new node
	head->before = new_node;
}

void traverse(Node *head) {
	Node *temp = head;

	// forward traversal
	while (temp != NULL) {
		cout << temp->data << endl;
		temp = temp->after;
	}

	temp = head;

	// backward traversal
	while (temp != NULL) {
		cout << temp->data << endl;
		temp = temp->before;
	}
}
