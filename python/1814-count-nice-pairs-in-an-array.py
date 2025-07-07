from typing import List


class Solution:
    def countNicePairs(self, nums: List[int]) -> int:
        MOD = 10 ** 9 + 7
        mp = {}
        ans = 0
        for x in nums:
            key = x - int(str(x)[::-1])
            ans = (ans + mp.get(key, 0)) % MOD
            mp[key] = mp.get(key, 0) + 1
        return ans


if __name__ == "__main__":
    print(Solution().countNicePairs([42, 11, 1, 97]))
