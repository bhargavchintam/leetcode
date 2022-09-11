from typing import List, Optional


class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution:
    def numComponents(self, head: Optional[ListNode], nums: List[int]) -> int:
        numset = set(nums)
        res = 0
        cur = head
        while cur:
            if cur.val in numset and (cur.next is None or cur.next.val not in numset):
                res += 1
            cur = cur.next
        return res


if __name__ == "__main__":
    head = ListNode(0, ListNode(1, ListNode(2, ListNode(3))))
    print(Solution().numComponents(head, [0, 1, 3]))
