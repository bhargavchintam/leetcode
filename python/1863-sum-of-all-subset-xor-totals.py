from typing import List


class Solution:
    def subsetXORSum(self, nums: List[int]) -> int:
        x = 0
        for v in nums:
            x |= v
        return x << (len(nums) - 1)


if __name__ == "__main__":
    print(Solution().subsetXORSum([1, 3]))
