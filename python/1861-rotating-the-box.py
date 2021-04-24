from typing import List


class Solution:
    def rotateTheBox(self, box: List[List[str]]) -> List[List[str]]:
        m, n = len(box), len(box[0])
        for row in box:
            write = n - 1
            for i in range(n - 1, -1, -1):
                if row[i] == '*':
                    write = i - 1
                elif row[i] == '#':
                    row[i] = '.'
                    row[write] = '#'
                    write -= 1
        return [[box[m - 1 - r][c] for r in range(m)] for c in range(n)]


if __name__ == "__main__":
    print(Solution().rotateTheBox([["#", ".", "#"]]))
