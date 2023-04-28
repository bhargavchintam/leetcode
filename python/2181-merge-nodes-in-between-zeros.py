from typing import Optional


class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution:
    def mergeNodes(self, head: Optional[ListNode]) -> Optional[ListNode]:
        dummy = ListNode()
        cur = dummy
        node = head.next
        s = 0
        while node:
            if node.val == 0:
                cur.next = ListNode(s)
                cur = cur.next
                s = 0
            else:
                s += node.val
            node = node.next
        return dummy.next


def build(vals):
    dummy = ListNode()
    cur = dummy
    for v in vals:
        cur.next = ListNode(v)
        cur = cur.next
    return dummy.next


def to_list(node):
    out = []
    while node:
        out.append(node.val)
        node = node.next
    return out


if __name__ == "__main__":
    head = build([0, 3, 1, 0, 4, 5, 2, 0])
    res = Solution().mergeNodes(head)
    print(to_list(res))
