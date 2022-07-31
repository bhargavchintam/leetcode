from typing import List


class Solution:
    def maximumBobPoints(self, numArrows: int, aliceArrows: List[int]) -> List[int]:
        best = 0
        bestMask = 0
        for mask in range(1 << 12):
            arrows = 0
            score = 0
            for k in range(12):
                if mask & (1 << k):
                    arrows += aliceArrows[k] + 1
                    score += k
            if arrows <= numArrows and score > best:
                best = score
                bestMask = mask
        res = [0] * 12
        used = 0
        for k in range(12):
            if bestMask & (1 << k):
                res[k] = aliceArrows[k] + 1
                used += res[k]
        res[0] += numArrows - used
        return res


if __name__ == "__main__":
    print(Solution().maximumBobPoints(9, [1, 1, 0, 1, 0, 0, 2, 1, 0, 1, 2, 0]))
    print(Solution().maximumBobPoints(3, [0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 2]))
