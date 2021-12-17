#include <iostream>

using namespace std;

class ListNode {
	public:
		int val;
		class ListNode* next;
		ListNode(int n): val(n), next(nullptr) {}
};

void printList(ListNode *head) {
	ListNode* temp = head;
	while (temp) {
		cout << temp->val << endl;
		temp = temp->next;
	}
}

int main() {
	ListNode *l = new ListNode(1);
	printList(l);
}
