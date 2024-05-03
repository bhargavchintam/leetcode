from typing import List
from collections import Counter


class Solution:
    def mostFrequent(self, nums: List[int], key: int) -> int:
        cnt = Counter()
        for i in range(len(nums) - 1):
            if nums[i] == key:
                cnt[nums[i + 1]] += 1
        return cnt.most_common(1)[0][0]


if __name__ == "__main__":
    print(Solution().mostFrequent([1, 100, 200, 1, 100], 1))
    print(Solution().mostFrequent([2, 2, 2, 2, 3], 2))
