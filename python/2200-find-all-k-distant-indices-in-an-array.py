from typing import List


class Solution:
    def findKDistantIndices(self, nums: List[int], key: int, k: int) -> List[int]:
        n = len(nums)
        idxs = [j for j in range(n) if nums[j] == key]
        res = []
        for i in range(n):
            if any(abs(i - j) <= k for j in idxs):
                res.append(i)
        return res


if __name__ == "__main__":
    print(Solution().findKDistantIndices([3, 4, 9, 1, 3, 9, 5], 9, 1))
    print(Solution().findKDistantIndices([2, 2, 2, 2, 2], 2, 2))
