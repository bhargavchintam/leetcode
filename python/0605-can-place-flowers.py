from typing import List


class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
        bed = [0] + flowerbed + [0]
        cnt = 0
        for i in range(1, len(bed) - 1):
            if bed[i] == 0 and bed[i - 1] == 0 and bed[i + 1] == 0:
                bed[i] = 1
                cnt += 1
        return cnt >= n


if __name__ == "__main__":
    print(Solution().canPlaceFlowers([1, 0, 0, 0, 1], 1))
    print(Solution().canPlaceFlowers([1, 0, 0, 0, 1], 2))
