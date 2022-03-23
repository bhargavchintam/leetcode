from typing import List


class Solution:
    def findSpecialInteger(self, arr: List[int]) -> int:
        n = len(arr)
        q = n // 4
        for i in range(n - q):
            if arr[i] == arr[i + q]:
                return arr[i]
        return arr[0]


if __name__ == "__main__":
    print(Solution().findSpecialInteger([1, 2, 2, 6, 6, 6, 6, 7, 10]))
