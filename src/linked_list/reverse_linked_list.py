class ListNode:
    def __init__(self, val, next=None):
        self.val = val
        self.next = next

def reverseLinkedList(head, n):
    dummy = ListNode(0)
    pre, cur = head, head.next
    for _ in range(n):
        cur.next, cur, pre = pre, cur.next, cur
    return dummy.next
