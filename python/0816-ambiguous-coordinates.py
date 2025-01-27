from typing import List


class Solution:
    def ambiguousCoordinates(self, s: str) -> List[str]:
        s = s[1:-1]

        def make(frag):
            res = []
            for d in range(1, len(frag) + 1):
                left = frag[:d]
                right = frag[d:]
                if (len(left) > 1 and left[0] == "0") or (len(right) > 1 and right[-1] == "0"):
                    continue
                res.append(left + ("." + right if right else ""))
            return res

        n = len(s)
        ans = []
        for i in range(1, n):
            for l in make(s[:i]):
                for r in make(s[i:]):
                    ans.append(f"({l}, {r})")
        return ans


if __name__ == "__main__":
    print(Solution().ambiguousCoordinates("(123)"))
