from typing import List


class Solution:
    def minSwap(self, nums1: List[int], nums2: List[int]) -> int:
        n = len(nums1)
        keep, swap = 0, 1
        for i in range(1, n):
            keep2 = swap2 = float("inf")
            if nums1[i] > nums1[i - 1] and nums2[i] > nums2[i - 1]:
                keep2 = min(keep2, keep)
                swap2 = min(swap2, swap + 1)
            if nums1[i] > nums2[i - 1] and nums2[i] > nums1[i - 1]:
                keep2 = min(keep2, swap)
                swap2 = min(swap2, keep + 1)
            keep, swap = keep2, swap2
        return min(keep, swap)


if __name__ == "__main__":
    print(Solution().minSwap([1, 3, 5, 4], [1, 2, 3, 7]))
