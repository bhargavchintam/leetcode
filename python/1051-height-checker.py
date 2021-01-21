from typing import List


class Solution:
    def heightChecker(self, heights: List[int]) -> int:
        expected = sorted(heights)
        return sum(1 for a, b in zip(heights, expected) if a != b)


if __name__ == "__main__":
    print(Solution().heightChecker([1, 1, 4, 2, 1, 3]))
