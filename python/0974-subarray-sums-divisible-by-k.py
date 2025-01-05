from typing import List


class Solution:
    def subarraysDivByK(self, nums: List[int], k: int) -> int:
        cnt = {0: 1}
        s = 0
        res = 0
        for x in nums:
            s = (s + x) % k
            res += cnt.get(s, 0)
            cnt[s] = cnt.get(s, 0) + 1
        return res


if __name__ == "__main__":
    print(Solution().subarraysDivByK([4, 5, 0, -2, -3, 1], 5))
