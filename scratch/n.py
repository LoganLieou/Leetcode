from typing import Optional

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def mergeTwoSorted(l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
    dummy = cur = ListNode(0)
    while l1 and l2:
        # wtf....
