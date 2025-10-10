from typing import List


class Solution:
    def minimumOperations(self, nums: List[int]) -> int:
        return len(set(x for x in nums if x > 0))


if __name__ == "__main__":
    print(Solution().minimumOperations([1, 5, 0, 3, 5]))
