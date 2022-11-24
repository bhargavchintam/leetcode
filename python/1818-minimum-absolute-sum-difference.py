import bisect
from typing import List


class Solution:
    def minAbsoluteSumDiff(self, nums1: List[int], nums2: List[int]) -> int:
        MOD = 10 ** 9 + 7
        srt = sorted(nums1)
        total = 0
        best = 0
        n = len(nums1)
        for i in range(n):
            d = abs(nums1[i] - nums2[i])
            total += d
            pos = bisect.bisect_left(srt, nums2[i])
            if pos < n:
                best = max(best, d - abs(srt[pos] - nums2[i]))
            if pos > 0:
                best = max(best, d - abs(srt[pos - 1] - nums2[i]))
        return (total - best) % MOD


if __name__ == "__main__":
    print(Solution().minAbsoluteSumDiff([1, 7, 5], [2, 3, 5]))
