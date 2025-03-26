from typing import List


class Solution:
    def isPrefixString(self, s: str, words: List[str]) -> bool:
        cur = ""
        for w in words:
            cur += w
            if cur == s:
                return True
            if len(cur) > len(s):
                return False
        return False


if __name__ == "__main__":
    print(Solution().isPrefixString("iloveleetcode", ["i", "love", "leetcode", "apples"]))
