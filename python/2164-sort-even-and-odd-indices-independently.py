from typing import List


class Solution:
    def sortEvenOdd(self, nums: List[int]) -> List[int]:
        even = sorted(nums[::2])
        odd = sorted(nums[1::2], reverse=True)
        res = [0] * len(nums)
        res[::2] = even
        res[1::2] = odd
        return res


if __name__ == "__main__":
    print(Solution().sortEvenOdd([4, 1, 2, 3]))
