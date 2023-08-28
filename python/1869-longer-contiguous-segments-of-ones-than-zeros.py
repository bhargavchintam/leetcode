class Solution:
    def checkZeroOnes(self, s: str) -> bool:
        def longest(ch):
            best = cur = 0
            for c in s:
                if c == ch:
                    cur += 1
                    best = max(best, cur)
                else:
                    cur = 0
            return best

        return longest('1') > longest('0')


if __name__ == "__main__":
    print(Solution().checkZeroOnes("1101"))
