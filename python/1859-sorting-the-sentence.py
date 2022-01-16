class Solution:
    def sortSentence(self, s: str) -> str:
        words = s.split()
        words.sort(key=lambda w: int(w[-1]))
        return ' '.join(w[:-1] for w in words)


if __name__ == "__main__":
    print(Solution().sortSentence("is2 sentence4 This1 a3"))
