from typing import List


class Solution:
    def pancakeSort(self, arr: List[int]) -> List[int]:
        res = []
        n = len(arr)
        for size in range(n, 1, -1):
            idx = arr.index(size)
            if idx == size - 1:
                continue
            if idx != 0:
                arr[:idx + 1] = arr[:idx + 1][::-1]
                res.append(idx + 1)
            arr[:size] = arr[:size][::-1]
            res.append(size)
        return res


if __name__ == "__main__":
    print(Solution().pancakeSort([3, 2, 4, 1]))
