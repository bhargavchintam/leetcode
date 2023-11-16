class Solution:
    def pushDominoes(self, dominoes: str) -> str:
        s = "L" + dominoes + "R"
        res = list(s)
        prev = 0
        for i in range(1, len(s)):
            if s[i] == ".":
                continue
            if s[prev] == s[i]:
                for k in range(prev + 1, i):
                    res[k] = s[prev]
            elif s[prev] == "R" and s[i] == "L":
                lo, hi = prev + 1, i - 1
                while lo < hi:
                    res[lo] = "R"
                    res[hi] = "L"
                    lo += 1
                    hi -= 1
            prev = i
        return "".join(res[1:-1])


if __name__ == "__main__":
    print(Solution().pushDominoes("RR.L"))
