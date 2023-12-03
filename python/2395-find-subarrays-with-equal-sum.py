from typing import List


class Solution:
    def findSubarrays(self, nums: List[int]) -> bool:
        seen = set()
        for i in range(len(nums) - 1):
            s = nums[i] + nums[i + 1]
            if s in seen:
                return True
            seen.add(s)
        return False


if __name__ == "__main__":
    print(Solution().findSubarrays([4, 2, 4]))
