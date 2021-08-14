class Solution:
    def balancedStringSplit(self, s: str) -> int:
        res = bal = 0
        for c in s:
            bal += 1 if c == 'R' else -1
            if bal == 0:
                res += 1
        return res


if __name__ == "__main__":
    print(Solution().balancedStringSplit("RLRRLLRLRL"))
