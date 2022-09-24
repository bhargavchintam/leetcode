from collections import defaultdict
from typing import List


class FindSumPairs:
    def __init__(self, nums1: List[int], nums2: List[int]):
        self.nums1 = nums1
        self.nums2 = nums2
        self.cnt2 = defaultdict(int)
        for v in nums2:
            self.cnt2[v] += 1

    def add(self, index: int, val: int) -> None:
        self.cnt2[self.nums2[index]] -= 1
        self.nums2[index] += val
        self.cnt2[self.nums2[index]] += 1

    def count(self, tot: int) -> int:
        res = 0
        for v in self.nums1:
            res += self.cnt2.get(tot - v, 0)
        return res


if __name__ == "__main__":
    obj = FindSumPairs([1, 1, 2, 2, 2, 3], [1, 4, 5, 2, 5, 4])
    print(obj.count(7))
    obj.add(3, 2)
    print(obj.count(8))
