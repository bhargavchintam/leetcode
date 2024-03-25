from typing import List


class Solution:
    def numberOfLines(self, widths: List[int], s: str) -> List[int]:
        lines = 1
        cur = 0
        for c in s:
            w = widths[ord(c) - 97]
            if cur + w > 100:
                lines += 1
                cur = w
            else:
                cur += w
        return [lines, cur]


if __name__ == "__main__":
    widths = [10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
              10, 10, 10, 10, 10, 10, 10, 10, 10, 10]
    print(Solution().numberOfLines(widths, "abcdefghijklmnopqrstuvwxyz"))
