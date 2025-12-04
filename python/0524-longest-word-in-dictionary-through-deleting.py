from typing import List


class Solution:
    def findLongestWord(self, s: str, dictionary: List[str]) -> str:
        def is_sub(w):
            it = iter(s)
            return all(c in it for c in w)

        res = ""
        for w in dictionary:
            if is_sub(w):
                if len(w) > len(res) or (len(w) == len(res) and w < res):
                    res = w
        return res


if __name__ == "__main__":
    print(Solution().findLongestWord("abpcplea", ["ale", "apple", "monkey", "plea"]))
