from typing import List, Optional


class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution:
    def spiralMatrix(self, m: int, n: int, head: Optional[ListNode]) -> List[List[int]]:
        res = [[-1] * n for _ in range(m)]
        top, bottom, left, right = 0, m - 1, 0, n - 1
        cur = head
        while top <= bottom and left <= right and cur:
            for j in range(left, right + 1):
                if not cur:
                    break
                res[top][j] = cur.val
                cur = cur.next
            top += 1
            for i in range(top, bottom + 1):
                if not cur:
                    break
                res[i][right] = cur.val
                cur = cur.next
            right -= 1
            if top <= bottom:
                for j in range(right, left - 1, -1):
                    if not cur:
                        break
                    res[bottom][j] = cur.val
                    cur = cur.next
                bottom -= 1
            if left <= right:
                for i in range(bottom, top - 1, -1):
                    if not cur:
                        break
                    res[i][left] = cur.val
                    cur = cur.next
                left += 1
        return res


def build(vals):
    dummy = ListNode()
    cur = dummy
    for v in vals:
        cur.next = ListNode(v)
        cur = cur.next
    return dummy.next


if __name__ == "__main__":
    head = build([3, 0, 2, 6, 8, 1, 7, 9, 4, 2, 5, 5, 0])
    print(Solution().spiralMatrix(3, 5, head))
