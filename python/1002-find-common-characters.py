from typing import List
from collections import Counter


class Solution:
    def commonChars(self, words: List[str]) -> List[str]:
        res = Counter(words[0])
        for w in words[1:]:
            res &= Counter(w)
        return list(res.elements())


if __name__ == "__main__":
    print(Solution().commonChars(["bella", "label", "roller"]))
