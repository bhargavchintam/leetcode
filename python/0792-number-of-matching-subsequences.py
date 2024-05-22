from collections import defaultdict
from typing import List


class Solution:
    def numMatchingSubseq(self, s: str, words: List[str]) -> int:
        waiting = defaultdict(list)
        for w in words:
            it = iter(w)
            waiting[next(it)].append(it)
        res = 0
        for c in s:
            bucket = waiting[c]
            waiting[c] = []
            for it in bucket:
                nxt = next(it, None)
                if nxt is None:
                    res += 1
                else:
                    waiting[nxt].append(it)
        return res


if __name__ == "__main__":
    print(Solution().numMatchingSubseq("abcde", ["a", "bb", "acd", "ace"]))
