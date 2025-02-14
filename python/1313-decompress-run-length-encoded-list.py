from typing import List


class Solution:
    def decompressRLElist(self, nums: List[int]) -> List[int]:
        res = []
        for i in range(0, len(nums), 2):
            res.extend([nums[i + 1]] * nums[i])
        return res


if __name__ == "__main__":
    print(Solution().decompressRLElist([1, 2, 3, 4]))
