from typing import List


class Solution:
    def arrayNesting(self, nums: List[int]) -> int:
        n = len(nums)
        seen = [False] * n
        res = 0
        for i in range(n):
            if seen[i]:
                continue
            cnt = 0
            j = i
            while not seen[j]:
                seen[j] = True
                j = nums[j]
                cnt += 1
            res = max(res, cnt)
        return res


if __name__ == "__main__":
    print(Solution().arrayNesting([5, 4, 0, 3, 1, 6, 2]))
