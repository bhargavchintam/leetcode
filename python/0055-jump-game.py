from typing import List


class Solution:
    def canJump(self, nums: List[int]) -> bool:
        reach = 0
        for i, x in enumerate(nums):
            if i > reach:
                return False
            reach = max(reach, i + x)
        return True


if __name__ == "__main__":
    print(Solution().canJump([2, 3, 1, 1, 4]))
