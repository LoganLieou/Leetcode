class ListNode:
    def __init__(self, val, nxt=None):
        self.val = val
        self.nxt = nxt


def merge_two(l1, l2):
    """
    function to merge two sorted linked
    list datastructures
    """
    dummy = cur = ListNode(0)
    while l1 and l2:
        if l1.val < l2.val:
            cur.nxt = l1
            l1 = l1.nxt
        else:
            cur.nxt = l2
            l2 = l2.nxt
        cur = cur.nxt
    cur.nxt = l1 or l2
    return dummy.nxt

