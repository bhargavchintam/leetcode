class Solution:
    def distinctSubseqII(self, s: str) -> int:
        MOD = 10 ** 9 + 7
        end = [0] * 26
        for c in s:
            i = ord(c) - 97
            end[i] = (sum(end) + 1) % MOD
        return sum(end) % MOD


if __name__ == "__main__":
    print(Solution().distinctSubseqII("abc"))
