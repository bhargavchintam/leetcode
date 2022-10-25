from typing import List


class Solution:
    def minDeletionSize(self, strs: List[str]) -> int:
        n = len(strs[0])
        res = 0
        for c in range(n):
            col = [s[c] for s in strs]
            if col != sorted(col):
                res += 1
        return res


if __name__ == "__main__":
    print(Solution().minDeletionSize(["cba", "daf", "ghi"]))
