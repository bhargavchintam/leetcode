from typing import List


class Solution:
    def sortColors(self, nums: List[int]) -> None:
        lo, i, hi = 0, 0, len(nums) - 1
        while i <= hi:
            if nums[i] == 0:
                nums[lo], nums[i] = nums[i], nums[lo]
                lo += 1
                i += 1
            elif nums[i] == 2:
                nums[hi], nums[i] = nums[i], nums[hi]
                hi -= 1
            else:
                i += 1


if __name__ == "__main__":
    nums = [2, 0, 2, 1, 1, 0]
    Solution().sortColors(nums)
    print(nums)
