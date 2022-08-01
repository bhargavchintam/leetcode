from typing import List


class Solution:
    def countPrefixes(self, words: List[str], s: str) -> int:
        return sum(1 for w in words if s.startswith(w))


if __name__ == "__main__":
    print(Solution().countPrefixes(["a", "b", "c", "ab", "bc", "abc"], "abc"))
    print(Solution().countPrefixes(["a", "a"], "aa"))
