from typing import List


class Solution:
    def minimumAverageDifference(self, nums: List[int]) -> int:
        n = len(nums)
        total = sum(nums)
        pre = 0
        best = float("inf")
        idx = 0
        for i in range(n):
            pre += nums[i]
            left = pre // (i + 1)
            right = (total - pre) // (n - i - 1) if n - i - 1 > 0 else 0
            diff = abs(left - right)
            if diff < best:
                best = diff
                idx = i
        return idx


if __name__ == "__main__":
    print(Solution().minimumAverageDifference([2, 5, 3, 9, 5, 3]))
    print(Solution().minimumAverageDifference([0]))
