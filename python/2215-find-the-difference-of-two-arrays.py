from typing import List


class Solution:
    def findDifference(self, nums1: List[int], nums2: List[int]) -> List[List[int]]:
        s1, s2 = set(nums1), set(nums2)
        return [sorted(s1 - s2), sorted(s2 - s1)]


if __name__ == "__main__":
    print(Solution().findDifference([1, 2, 3], [2, 4, 6]))
    print(Solution().findDifference([1, 2, 3, 3], [1, 1, 2, 2]))
