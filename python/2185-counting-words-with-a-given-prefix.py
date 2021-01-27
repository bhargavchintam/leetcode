from typing import List


class Solution:
    def prefixCount(self, words: List[str], pref: str) -> int:
        return sum(w.startswith(pref) for w in words)


if __name__ == "__main__":
    print(Solution().prefixCount(["pay", "attention", "practice", "attend"], "at"))
    print(Solution().prefixCount(["leetcode", "win", "loops", "success"], "code"))
