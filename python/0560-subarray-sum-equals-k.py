from typing import List


class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        mp = {0: 1}
        s = 0
        res = 0
        for x in nums:
            s += x
            res += mp.get(s - k, 0)
            mp[s] = mp.get(s, 0) + 1
        return res


if __name__ == "__main__":
    print(Solution().subarraySum([1, 1, 1], 2))
