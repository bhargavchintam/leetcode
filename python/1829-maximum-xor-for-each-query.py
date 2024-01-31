from typing import List


class Solution:
    def getMaximumXor(self, nums: List[int], maximumBit: int) -> List[int]:
        mask = (1 << maximumBit) - 1
        x = 0
        for v in nums:
            x ^= v
        ans = []
        for v in reversed(nums):
            ans.append(x ^ mask)
            x ^= v
        return ans


if __name__ == "__main__":
    print(Solution().getMaximumXor([0, 1, 1, 3], 2))
