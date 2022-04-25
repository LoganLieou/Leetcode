from typing import Optional

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def mergeTwoLists(l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
    if l1 and l2:
        if l1.val > l2.val:
            l1, l2 = l2, l1
        l1.next = mergeTwoLists(l1.next, l2)
    return l1 or l2

def mergeTwoSorted(l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
