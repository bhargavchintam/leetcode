from typing import List


class Solution:
    def lastStoneWeightII(self, stones: List[int]) -> int:
        total = sum(stones)
        target = total // 2
        dp = 1
        for s in stones:
            dp |= dp << s
        dp &= (1 << (target + 1)) - 1
        best = dp.bit_length() - 1
        return total - 2 * best


if __name__ == "__main__":
    print(Solution().lastStoneWeightII([2, 7, 4, 1, 8, 1]))
