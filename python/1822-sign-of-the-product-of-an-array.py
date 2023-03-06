from typing import List


class Solution:
    def arraySign(self, nums: List[int]) -> int:
        sign = 1
        for x in nums:
            if x == 0:
                return 0
            if x < 0:
                sign = -sign
        return sign


if __name__ == "__main__":
    print(Solution().arraySign([-1, -2, -3, -4, 3, 2, 1]))
