from typing import List
from collections import Counter


class Solution:
    def bestHand(self, ranks: List[int], suits: List[str]) -> str:
        if len(set(suits)) == 1:
            return "Flush"
        cnt = Counter(ranks)
        mx = max(cnt.values())
        if mx >= 3:
            return "Three of a Kind"
        if mx == 2:
            return "Pair"
        return "High Card"


if __name__ == "__main__":
    print(Solution().bestHand([13, 2, 3, 1, 9], ["a", "a", "a", "a", "a"]))
