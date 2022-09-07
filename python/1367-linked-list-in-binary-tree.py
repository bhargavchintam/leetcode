class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def isSubPath(self, head: ListNode, root: TreeNode) -> bool:
        def dfs(node, h):
            if not h:
                return True
            if not node or node.val != h.val:
                return False
            return dfs(node.left, h.next) or dfs(node.right, h.next)

        def preorder(node):
            if not node:
                return False
            if dfs(node, head):
                return True
            return preorder(node.left) or preorder(node.right)

        return preorder(root)


if __name__ == "__main__":
    head = ListNode(1, ListNode(2, ListNode(3)))
    root = TreeNode(1, TreeNode(2, TreeNode(3)))
    print(Solution().isSubPath(head, root))
