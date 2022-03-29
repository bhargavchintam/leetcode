class Solution:
    def truncateSentence(self, s: str, k: int) -> str:
        return ' '.join(s.split()[:k])


if __name__ == "__main__":
    print(Solution().truncateSentence("Hello how are you Contestant", 4))
