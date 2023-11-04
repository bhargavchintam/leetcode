from typing import List


class Solution:
    def findClosestNumber(self, nums: List[int]) -> int:
        res = nums[0]
        for x in nums[1:]:
            if abs(x) < abs(res) or (abs(x) == abs(res) and x > res):
                res = x
        return res


if __name__ == "__main__":
    print(Solution().findClosestNumber([-4, -2, 1, 4, 8]))
    print(Solution().findClosestNumber([2, -1, 1]))
