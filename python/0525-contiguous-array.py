from typing import List


class Solution:
    def findMaxLength(self, nums: List[int]) -> int:
        mp = {0: -1}
        cnt = 0
        res = 0
        for i, x in enumerate(nums):
            cnt += 1 if x == 1 else -1
            if cnt in mp:
                res = max(res, i - mp[cnt])
            else:
                mp[cnt] = i
        return res


if __name__ == "__main__":
    print(Solution().findMaxLength([0, 1]))
