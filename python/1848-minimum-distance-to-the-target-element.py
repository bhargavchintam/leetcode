from typing import List


class Solution:
    def getMinDistance(self, nums: List[int], target: int, start: int) -> int:
        ans = float('inf')
        for i, x in enumerate(nums):
            if x == target:
                ans = min(ans, abs(i - start))
        return ans


if __name__ == "__main__":
    print(Solution().getMinDistance([1, 2, 3, 4, 5], 5, 3))
