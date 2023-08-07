from typing import List


class Solution:
    def maxDistance(self, nums1: List[int], nums2: List[int]) -> int:
        i = j = 0
        ans = 0
        n, m = len(nums1), len(nums2)
        while i < n and j < m:
            if nums1[i] > nums2[j]:
                i += 1
                if i > j:
                    j = i
            else:
                ans = max(ans, j - i)
                j += 1
        return ans


if __name__ == "__main__":
    print(Solution().maxDistance([55, 30, 5, 4, 2], [100, 20, 10, 10, 5]))
