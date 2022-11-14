from typing import List


class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        res = []

        def bt(cur, open_c, close_c):
            if len(cur) == 2 * n:
                res.append("".join(cur))
                return
            if open_c < n:
                cur.append("(")
                bt(cur, open_c + 1, close_c)
                cur.pop()
            if close_c < open_c:
                cur.append(")")
                bt(cur, open_c, close_c + 1)
                cur.pop()

        bt([], 0, 0)
        return res


if __name__ == "__main__":
    print(Solution().generateParenthesis(3))
