class Solution:
    def digitSum(self, s: str, k: int) -> str:
        while len(s) > k:
            t = []
            for i in range(0, len(s), k):
                grp = s[i:i + k]
                t.append(str(sum(int(c) for c in grp)))
            s = "".join(t)
        return s


if __name__ == "__main__":
    print(Solution().digitSum("11111222223", 3))
    print(Solution().digitSum("00000000", 3))
