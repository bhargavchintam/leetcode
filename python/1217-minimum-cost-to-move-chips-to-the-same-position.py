from typing import List


class Solution:
    def minCostToMoveChips(self, position: List[int]) -> int:
        even = sum(1 for p in position if p % 2 == 0)
        odd = len(position) - even
        return min(even, odd)


if __name__ == "__main__":
    print(Solution().minCostToMoveChips([1, 2, 3]))
