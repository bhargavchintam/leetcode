from typing import List


class Solution:
    def evaluate(self, s: str, knowledge: List[List[str]]) -> str:
        mp = {k: v for k, v in knowledge}
        res = []
        i = 0
        n = len(s)
        while i < n:
            if s[i] == '(':
                j = s.index(')', i)
                key = s[i + 1:j]
                res.append(mp.get(key, '?'))
                i = j + 1
            else:
                res.append(s[i])
                i += 1
        return ''.join(res)


if __name__ == "__main__":
    print(Solution().evaluate("(name)is(age)yearsold", [["name", "bob"], ["age", "two"]]))
