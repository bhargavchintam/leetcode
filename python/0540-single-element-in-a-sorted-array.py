from typing import List


class Solution:
    def singleNonDuplicate(self, nums: List[int]) -> int:
        lo, hi = 0, len(nums) - 1
        while lo < hi:
            mid = (lo + hi) // 2
            if mid % 2 == 1:
                mid -= 1
            if nums[mid] == nums[mid + 1]:
                lo = mid + 2
            else:
                hi = mid
        return nums[lo]


if __name__ == "__main__":
    print(Solution().singleNonDuplicate([1, 1, 2, 3, 3, 4, 4, 8, 8]))
