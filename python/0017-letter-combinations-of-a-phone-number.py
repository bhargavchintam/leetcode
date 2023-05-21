from typing import List


class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        if not digits:
            return []
        mp = {
            "2": "abc", "3": "def", "4": "ghi", "5": "jkl",
            "6": "mno", "7": "pqrs", "8": "tuv", "9": "wxyz",
        }
        res = []

        def bt(i, cur):
            if i == len(digits):
                res.append("".join(cur))
                return
            for c in mp[digits[i]]:
                cur.append(c)
                bt(i + 1, cur)
                cur.pop()

        bt(0, [])
        return res


if __name__ == "__main__":
    print(Solution().letterCombinations("23"))
