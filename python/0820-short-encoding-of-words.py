from typing import List


class Solution:
    def minimumLengthEncoding(self, words: List[str]) -> int:
        wordset = set(words)
        for w in words:
            for i in range(1, len(w)):
                wordset.discard(w[i:])
        return sum(len(w) + 1 for w in wordset)


if __name__ == "__main__":
    print(Solution().minimumLengthEncoding(["time", "me", "bell"]))
