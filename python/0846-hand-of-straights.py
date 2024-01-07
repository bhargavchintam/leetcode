from collections import Counter
from typing import List


class Solution:
    def isNStraightHand(self, hand: List[int], groupSize: int) -> bool:
        if len(hand) % groupSize != 0:
            return False
        cnt = Counter(hand)
        for x in sorted(cnt):
            c = cnt[x]
            if c > 0:
                for k in range(x, x + groupSize):
                    if cnt[k] < c:
                        return False
                    cnt[k] -= c
        return True


if __name__ == "__main__":
    print(Solution().isNStraightHand([1, 2, 3, 6, 2, 3, 4, 7, 8], 3))
