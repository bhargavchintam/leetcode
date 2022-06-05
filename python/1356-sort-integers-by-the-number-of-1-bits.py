from typing import List


class Solution:
    def sortByBits(self, arr: List[int]) -> List[int]:
        return sorted(arr, key=lambda x: (bin(x).count('1'), x))


if __name__ == "__main__":
    print(Solution().sortByBits([0, 1, 2, 3, 4, 5, 6, 7, 8]))
