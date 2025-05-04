import heapq
from typing import List, Optional


class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution:
    def mergeKLists(self, lists: List[Optional[ListNode]]) -> Optional[ListNode]:
        h = []
        for i, node in enumerate(lists):
            if node:
                heapq.heappush(h, (node.val, i, node))
        dummy = ListNode()
        cur = dummy
        while h:
            val, i, node = heapq.heappop(h)
            cur.next = node
            cur = cur.next
            if node.next:
                heapq.heappush(h, (node.next.val, i, node.next))
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
    lists = [build([1, 4, 5]), build([1, 3, 4]), build([2, 6])]
    res = Solution().mergeKLists(lists)
    print(to_list(res))
