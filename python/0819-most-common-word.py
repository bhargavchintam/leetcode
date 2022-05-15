import re
from collections import Counter
from typing import List


class Solution:
    def mostCommonWord(self, paragraph: str, banned: List[str]) -> str:
        words = re.findall(r"[a-z]+", paragraph.lower())
        banned_set = set(banned)
        cnt = Counter(w for w in words if w not in banned_set)
        return cnt.most_common(1)[0][0]


if __name__ == "__main__":
    p = "Bob hit a ball, the hit BALL flew far after it was hit."
    print(Solution().mostCommonWord(p, ["hit"]))
