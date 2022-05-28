class Solution:
    def countAndSay(self, n: int) -> str:
        s = "1"
        for _ in range(n - 1):
            nxt = []
            i = 0
            while i < len(s):
                j = i
                while j < len(s) and s[j] == s[i]:
                    j += 1
                nxt.append(str(j - i))
                nxt.append(s[i])
                i = j
            s = "".join(nxt)
        return s


if __name__ == "__main__":
    print(Solution().countAndSay(4))
