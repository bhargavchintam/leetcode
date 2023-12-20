class Solution:
    def minAddToMakeValid(self, s: str) -> int:
        res = 0
        open = 0
        for c in s:
            if c == '(':
                open += 1
            else:
                if open > 0:
                    open -= 1
                else:
                    res += 1
        return res + open


if __name__ == "__main__":
    print(Solution().minAddToMakeValid("())"))
