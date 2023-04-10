from typing import List


class Solution:
    def letterCasePermutation(self, s: str) -> List[str]:
        res = [""]
        for ch in s:
            if ch.isalpha():
                res = [p + c for p in res for c in (ch.lower(), ch.upper())]
            else:
                res = [p + ch for p in res]
        return res


if __name__ == "__main__":
    print(Solution().letterCasePermutation("a1b2"))
