from typing import List
from collections import Counter


class Solution:
    def divideArray(self, nums: List[int]) -> bool:
        cnt = Counter(nums)
        return all(v % 2 == 0 for v in cnt.values())


if __name__ == "__main__":
    print(Solution().divideArray([3, 2, 3, 2, 2, 2]))
    print(Solution().divideArray([1, 2, 3, 4]))
