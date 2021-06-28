from typing import List


class Solution:
    def triangleNumber(self, nums: List[int]) -> int:
        nums.sort()
        n = len(nums)
        res = 0
        for k in range(n - 1, 1, -1):
            i, j = 0, k - 1
            while i < j:
                if nums[i] + nums[j] > nums[k]:
                    res += j - i
                    j -= 1
                else:
                    i += 1
        return res


if __name__ == "__main__":
    print(Solution().triangleNumber([2, 2, 3, 4]))
    print(Solution().triangleNumber([4, 2, 3, 4]))
