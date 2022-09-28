from collections import Counter
from typing import List


class Solution:
    def makeEqual(self, words: List[str]) -> bool:
        cnt = Counter()
        for w in words:
            cnt.update(w)
        n = len(words)
        return all(v % n == 0 for v in cnt.values())


if __name__ == "__main__":
    print(Solution().makeEqual(["abc", "aabc", "bc"]))
