from typing import List


class Solution:
    def sortArrayByParityII(self, nums: List[int]) -> List[int]:
        res = [0] * len(nums)
        i = 0
        for x in nums:
            if x % 2 == 0:
                res[i] = x
                i += 2
        i = 1
        for x in nums:
            if x % 2 == 1:
                res[i] = x
                i += 2
        return res


if __name__ == "__main__":
    print(Solution().sortArrayByParityII([4, 2, 5, 7]))
