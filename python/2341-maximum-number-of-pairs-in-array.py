from typing import List


class Solution:
    def numberOfPairs(self, nums: List[int]) -> List[int]:
        cnt = {}
        for x in nums:
            cnt[x] = cnt.get(x, 0) + 1
        pairs = 0
        left = 0
        for v in cnt.values():
            pairs += v // 2
            left += v % 2
        return [pairs, left]


if __name__ == "__main__":
    print(Solution().numberOfPairs([1, 3, 2, 1, 3, 2, 2]))
