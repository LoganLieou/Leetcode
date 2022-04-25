class ListNode:
    def __init__(self, val, next=None):
        self.val = val
        self.next = next

def reverseKGroup(head, k):
    """
    using dummy head, and l, r to define the range which
    is to be reversed, lr is our window of size k, pre, cur
    for standard reverse linked list method and jump is used
    to connect the last node in previous k-group to first node
    in following k-group
    """
    dummy = jump = ListNode(0)
    dummy.next = l = r = head

    while True:
        count = 0
        while r and count < k:
            r = r.next
            count += 1
        if count == k:
            pre, cur = r, l
            for _ in range(k):
                cur.next, cur, pre = pre, cur.next, cur
            jump.next, jump, l = pre, l, r
        else:
            return dummy.next
