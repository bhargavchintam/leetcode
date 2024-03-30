from typing import List


class Solution:
    def shortestToChar(self, s: str, c: str) -> List[int]:
        n = len(s)
        res = [0] * n
        prev = -2 * n
        for i in range(n):
            if s[i] == c:
                prev = i
            res[i] = i - prev
        prev = 2 * n
        for i in range(n - 1, -1, -1):
            if s[i] == c:
                prev = i
            res[i] = min(res[i], abs(i - prev))
        return res


if __name__ == "__main__":
    print(Solution().shortestToChar("loveleetcode", "e"))
