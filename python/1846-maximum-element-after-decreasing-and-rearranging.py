from typing import List


class Solution:
    def maximumElementAfterDecrementingAndRearranging(self, arr: List[int]) -> int:
        arr.sort()
        arr[0] = 1
        for i in range(1, len(arr)):
            arr[i] = min(arr[i], arr[i - 1] + 1)
        return arr[-1]


if __name__ == "__main__":
    print(Solution().maximumElementAfterDecrementingAndRearranging([2, 2, 1, 2, 1]))
