#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int v): val(v), next(nullptr) { }
};

ListNode* addLists(ListNode* list1, ListNode* list2) {
    ListNode* list3 = nullptr;
    ListNode* curr = nullptr;
    int carry = 0;

    while (list1 && list2) {
        int x = list1->val + list2->val + carry;
        if (x > 9) {
            carry = 1;
            x -= 10;
        } else {
            carry = 0;
        }
        if (list3 == nullptr) {
            list3 = new ListNode(x);
            curr = curr->next;
        }
        list1 = list1->next;
        list2 = list2->next;
    }

    while (list2) {
        int x = list1->val + carry;
    }
}
