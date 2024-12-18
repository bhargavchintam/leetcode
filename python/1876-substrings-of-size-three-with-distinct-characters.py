class Solution:
    def countGoodSubstrings(self, s: str) -> int:
        cnt = 0
        for i in range(len(s) - 2):
            if len(set(s[i:i + 3])) == 3:
                cnt += 1
        return cnt


if __name__ == "__main__":
    print(Solution().countGoodSubstrings("xyzzaz"))
