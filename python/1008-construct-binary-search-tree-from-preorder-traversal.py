from typing import List


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def bstFromPreorder(self, preorder: List[int]):
        root = TreeNode(preorder[0])
        st = [root]
        for v in preorder[1:]:
            node = TreeNode(v)
            if v < st[-1].val:
                st[-1].left = node
            else:
                p = st[-1]
                while st and st[-1].val < v:
                    p = st.pop()
                p.right = node
            st.append(node)
        return root


def show(root):
    if not root:
        return []
    res = []
    q = [root]
    while q:
        node = q.pop(0)
        if node:
            res.append(node.val)
            q.append(node.left)
            q.append(node.right)
        else:
            res.append(None)
    while res and res[-1] is None:
        res.pop()
    return res


if __name__ == "__main__":
    root = Solution().bstFromPreorder([8, 5, 1, 7, 10, 12])
    print(show(root))
