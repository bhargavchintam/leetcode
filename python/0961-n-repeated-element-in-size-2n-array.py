from typing import List


class Solution:
    def repeatedNTimes(self, nums: List[int]) -> int:
        seen = set()
        for x in nums:
            if x in seen:
                return x
            seen.add(x)


if __name__ == "__main__":
    print(Solution().repeatedNTimes([5, 1, 5, 2, 5, 3, 5, 4]))
