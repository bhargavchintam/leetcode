class Solution:
    def maxValue(self, n: int, index: int, maxSum: int) -> int:
        def side(cnt, peak):
            if cnt >= peak:
                return peak * (peak - 1) // 2 + (cnt - peak + 1)
            return (peak - 1 + peak - cnt) * cnt // 2

        def cost(peak):
            return peak + side(index, peak) + side(n - 1 - index, peak)

        lo, hi = 1, maxSum
        while lo < hi:
            mid = (lo + hi + 1) // 2
            if cost(mid) <= maxSum:
                lo = mid
            else:
                hi = mid - 1
        return lo


if __name__ == "__main__":
    print(Solution().maxValue(4, 2, 6))
