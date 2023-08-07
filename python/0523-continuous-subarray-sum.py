from typing import List


class Solution:
    def checkSubarraySum(self, nums: List[int], k: int) -> bool:
        mp = {0: -1}
        cur = 0
        for i, x in enumerate(nums):
            cur += x
            r = cur % k
            if r in mp:
                if i - mp[r] > 1:
                    return True
            else:
                mp[r] = i
        return False


if __name__ == "__main__":
    print(Solution().checkSubarraySum([23, 2, 4, 6, 7], 6))
