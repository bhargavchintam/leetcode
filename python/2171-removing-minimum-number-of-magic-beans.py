from typing import List


class Solution:
    def minimumRemoval(self, beans: List[int]) -> int:
        beans.sort()
        n = len(beans)
        s = sum(beans)
        best = s
        for i in range(n):
            remove = s - beans[i] * (n - i)
            best = min(best, remove)
        return best


if __name__ == "__main__":
    print(Solution().minimumRemoval([4, 1, 6, 5]))
    print(Solution().minimumRemoval([2, 10, 3, 2]))
