from typing import List


class Solution:
    def canThreePartsEqualSum(self, arr: List[int]) -> bool:
        total = sum(arr)
        if total % 3 != 0:
            return False
        target = total // 3
        cnt = 0
        cur = 0
        for x in arr:
            cur += x
            if cur == target:
                cnt += 1
                cur = 0
        return cnt >= 3


if __name__ == "__main__":
    print(Solution().canThreePartsEqualSum([0, 2, 1, -6, 6, -7, 9, 1, 2, 0, 1]))
