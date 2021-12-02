from collections import Counter


class Solution:
    def areOccurrencesEqual(self, s: str) -> bool:
        cnt = Counter(s)
        return len(set(cnt.values())) == 1


if __name__ == "__main__":
    print(Solution().areOccurrencesEqual("abacbc"))
