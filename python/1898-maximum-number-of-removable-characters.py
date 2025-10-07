from typing import List


class Solution:
    def maximumRemovals(self, s: str, p: str, removable: List[int]) -> int:
        def isSub(k):
            removed = set(removable[:k])
            j = 0
            for i, c in enumerate(s):
                if i in removed:
                    continue
                if j < len(p) and c == p[j]:
                    j += 1
            return j == len(p)

        lo, hi = 0, len(removable)
        while lo < hi:
            mid = (lo + hi + 1) // 2
            if isSub(mid):
                lo = mid
            else:
                hi = mid - 1
        return lo


if __name__ == "__main__":
    print(Solution().maximumRemovals("abcacb", "ab", [3, 1, 0]))
