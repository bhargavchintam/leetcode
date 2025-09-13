from typing import List


class Solution:
    def minElements(self, nums: List[int], limit: int, goal: int) -> int:
        diff = abs(goal - sum(nums))
        return (diff + limit - 1) // limit


if __name__ == "__main__":
    print(Solution().minElements([1, -1, 1], 3, -4))
