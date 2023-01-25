from typing import List


class Solution:
    def findCircleNum(self, isConnected: List[List[int]]) -> int:
        n = len(isConnected)
        seen = [False] * n
        cnt = 0

        def dfs(i):
            seen[i] = True
            for j in range(n):
                if isConnected[i][j] == 1 and not seen[j]:
                    dfs(j)

        for i in range(n):
            if not seen[i]:
                cnt += 1
                dfs(i)
        return cnt


if __name__ == "__main__":
    print(Solution().findCircleNum([[1, 1, 0], [1, 1, 0], [0, 0, 1]]))
