class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def flipEquiv(self, r1, r2):
        if not r1 and not r2:
            return True
        if not r1 or not r2 or r1.val != r2.val:
            return False
        return (self.flipEquiv(r1.left, r2.left) and self.flipEquiv(r1.right, r2.right)) or \
               (self.flipEquiv(r1.left, r2.right) and self.flipEquiv(r1.right, r2.left))


if __name__ == "__main__":
    r1 = TreeNode(1, TreeNode(2), TreeNode(3))
    r2 = TreeNode(1, TreeNode(3), TreeNode(2))
    print(Solution().flipEquiv(r1, r2))
