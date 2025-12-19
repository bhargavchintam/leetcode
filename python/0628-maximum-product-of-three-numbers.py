from typing import List


class Solution:
    def maximumProduct(self, nums: List[int]) -> int:
        nums.sort()
        n = len(nums)
        return max(nums[-1] * nums[-2] * nums[-3], nums[0] * nums[1] * nums[-1])


if __name__ == "__main__":
    print(Solution().maximumProduct([1, 2, 3]))
    print(Solution().maximumProduct([1, 2, 3, 4]))
    print(Solution().maximumProduct([-4, -3, -2, -1, 60]))
