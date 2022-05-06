from typing import List


class Solution:
    def findRelativeRanks(self, score: List[int]) -> List[str]:
        n = len(score)
        order = sorted(range(n), key=lambda i: score[i], reverse=True)
        res = [""] * n
        medals = ["Gold Medal", "Silver Medal", "Bronze Medal"]
        for rank, i in enumerate(order):
            if rank < 3:
                res[i] = medals[rank]
            else:
                res[i] = str(rank + 1)
        return res


if __name__ == "__main__":
    print(Solution().findRelativeRanks([5, 4, 3, 2, 1]))
    print(Solution().findRelativeRanks([10, 3, 8, 9, 4]))
