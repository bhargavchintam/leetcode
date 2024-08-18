from typing import List


class Solution:
    def maxFrequency(self, nums: List[int], k: int) -> int:
        nums.sort()
        l = 0
        total = 0
        ans = 1
        for r in range(len(nums)):
            total += nums[r]
            while nums[r] * (r - l + 1) - total > k:
                total -= nums[l]
                l += 1
            ans = max(ans, r - l + 1)
        return ans


if __name__ == "__main__":
    print(Solution().maxFrequency([1, 2, 4], 5))
