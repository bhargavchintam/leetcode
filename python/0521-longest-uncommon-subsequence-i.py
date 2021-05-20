class Solution:
    def findLUSlength(self, a: str, b: str) -> int:
        if a == b:
            return -1
        return max(len(a), len(b))


if __name__ == "__main__":
    print(Solution().findLUSlength("aba", "cdc"))
