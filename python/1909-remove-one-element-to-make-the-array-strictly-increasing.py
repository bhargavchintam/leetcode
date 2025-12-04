from typing import List


class Solution:
    def canBeIncreasing(self, nums: List[int]) -> bool:
        def strictlyInc(arr):
            return all(arr[i] < arr[i + 1] for i in range(len(arr) - 1))

        for i in range(len(nums)):
            if strictlyInc(nums[:i] + nums[i + 1:]):
                return True
        return False


if __name__ == "__main__":
    print(Solution().canBeIncreasing([1, 2, 10, 5, 7]))
