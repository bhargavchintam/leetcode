from typing import List


class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution:
    def nextLargerNodes(self, head) -> List[int]:
        arr = []
        node = head
        while node:
            arr.append(node.val)
            node = node.next
        res = [0] * len(arr)
        st = []
        for i, v in enumerate(arr):
            while st and arr[st[-1]] < v:
                res[st.pop()] = v
            st.append(i)
        return res


def build(vals):
    head = ListNode(vals[0])
    node = head
    for v in vals[1:]:
        node.next = ListNode(v)
        node = node.next
    return head


if __name__ == "__main__":
    head = build([2, 1, 5])
    print(Solution().nextLargerNodes(head))
