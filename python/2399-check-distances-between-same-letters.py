from typing import List


class Solution:
    def checkDistances(self, s: str, distance: List[int]) -> bool:
        first = {}
        for i, ch in enumerate(s):
            if ch in first:
                if i - first[ch] - 1 != distance[ord(ch) - ord('a')]:
                    return False
            else:
                first[ch] = i
        return True


if __name__ == "__main__":
    d = [0] * 26
    d[0] = 1
    d[1] = 3
    print(Solution().checkDistances("abaccb", d))
