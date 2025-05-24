from typing import List


class Solution:
    def combine(self, n: int, k: int) -> List[List[int]]:
        res = []

        def bt(start, cur):
            if len(cur) == k:
                res.append(cur[:])
                return
            for i in range(start, n + 1):
                cur.append(i)
                bt(i + 1, cur)
                cur.pop()

        bt(1, [])
        return res


if __name__ == "__main__":
    print(Solution().combine(4, 2))
