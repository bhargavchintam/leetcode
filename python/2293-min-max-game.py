from typing import List


class Solution:
    def minMaxGame(self, nums: List[int]) -> int:
        while len(nums) > 1:
            n = len(nums)
            nxt = [0] * (n // 2)
            for i in range(n // 2):
                if i % 2 == 0:
                    nxt[i] = min(nums[2 * i], nums[2 * i + 1])
                else:
                    nxt[i] = max(nums[2 * i], nums[2 * i + 1])
            nums = nxt
        return nums[0]


if __name__ == "__main__":
    print(Solution().minMaxGame([1, 3, 5, 2, 4, 8, 2, 2]))
