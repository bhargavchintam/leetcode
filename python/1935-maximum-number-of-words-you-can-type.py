class Solution:
    def canBeTypedWords(self, text: str, brokenLetters: str) -> int:
        broken = set(brokenLetters)
        cnt = 0
        for w in text.split():
            if not any(c in broken for c in w):
                cnt += 1
        return cnt


if __name__ == "__main__":
    print(Solution().canBeTypedWords("hello world", "ad"))
