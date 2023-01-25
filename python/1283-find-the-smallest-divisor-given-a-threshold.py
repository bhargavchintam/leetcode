from typing import List


class Solution:
    def smallestDivisor(self, nums: List[int], threshold: int) -> int:
        lo, hi = 1, max(nums)
        while lo < hi:
            mid = (lo + hi) // 2
            s = sum((x + mid - 1) // mid for x in nums)
            if s <= threshold:
                hi = mid
            else:
                lo = mid + 1
        return lo


if __name__ == "__main__":
    print(Solution().smallestDivisor([1, 2, 5, 9], 6))
