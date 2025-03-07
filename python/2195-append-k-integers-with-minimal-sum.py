from typing import List


class Solution:
    def minimalKSum(self, nums: List[int], k: int) -> int:
        vals = sorted(set(nums))
        res = 0
        prev = 0
        for x in vals:
            if k <= 0:
                break
            gap = x - prev - 1
            take = min(gap, k)
            res += (prev + 1 + prev + take) * take // 2
            k -= take
            prev = x
        if k > 0:
            res += (prev + 1 + prev + k) * k // 2
        return res


if __name__ == "__main__":
    print(Solution().minimalKSum([1, 4, 25, 10, 25], 2))
    print(Solution().minimalKSum([5, 6], 6))
