from typing import List


class Solution:
    def findUnsortedSubarray(self, nums: List[int]) -> int:
        n = len(nums)
        st = sorted(nums)
        lo, hi = 0, n - 1
        while lo < n and nums[lo] == st[lo]:
            lo += 1
        if lo == n:
            return 0
        while hi >= 0 and nums[hi] == st[hi]:
            hi -= 1
        return hi - lo + 1


if __name__ == "__main__":
    print(Solution().findUnsortedSubarray([2, 6, 4, 8, 10, 9, 15]))
