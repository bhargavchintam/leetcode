from typing import List


class Solution:
    def triangularSum(self, nums: List[int]) -> int:
        nums = nums[:]
        while len(nums) > 1:
            nums = [(nums[i] + nums[i + 1]) % 10 for i in range(len(nums) - 1)]
        return nums[0]


if __name__ == "__main__":
    print(Solution().triangularSum([1, 2, 3, 4, 5]))
    print(Solution().triangularSum([5]))
