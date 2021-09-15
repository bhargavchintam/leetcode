from typing import List
from collections import Counter


class Solution:
    def maxScoreWords(self, words: List[str], letters: List[str], score: List[int]) -> int:
        avail = Counter(letters)
        n = len(words)
        self.res = 0

        def bt(i, cur):
            if i == n:
                self.res = max(self.res, cur)
                return
            bt(i + 1, cur)
            c = Counter(words[i])
            if all(avail[ch] >= cnt for ch, cnt in c.items()):
                for ch, cnt in c.items():
                    avail[ch] -= cnt
                bt(i + 1, cur + sum(score[ord(ch) - 97] * cnt for ch, cnt in c.items()))
                for ch, cnt in c.items():
                    avail[ch] += cnt

        bt(0, 0)
        return self.res


if __name__ == "__main__":
    words = ["dog", "cat", "dad", "good"]
    letters = ["a", "a", "c", "d", "d", "d", "g", "o", "o"]
    score = [1, 0, 9, 5, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
    print(Solution().maxScoreWords(words, letters, score))
