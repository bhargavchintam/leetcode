from typing import List


class Solution:
    def maximumEvenSplit(self, finalSum: int) -> List[int]:
        if finalSum % 2 != 0:
            return []
        res = []
        cur = 2
        remaining = finalSum
        while remaining >= cur:
            res.append(cur)
            remaining -= cur
            cur += 2
        res[-1] += remaining
        return res


if __name__ == "__main__":
    print(Solution().maximumEvenSplit(12))
    print(Solution().maximumEvenSplit(28))
