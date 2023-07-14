from typing import List


class Solution:
    def findCenter(self, edges: List[List[int]]) -> int:
        a, b = edges[0]
        c, d = edges[1]
        return a if a in (c, d) else b


if __name__ == "__main__":
    print(Solution().findCenter([[1, 2], [2, 3], [4, 2]]))
