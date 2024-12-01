from typing import List


class Solution:
    def splitIntoFibonacci(self, num: str) -> List[int]:
        res = []

        def backtrack(start):
            if start == len(num) and len(res) >= 3:
                return True
            for end in range(start + 1, len(num) + 1):
                seg = num[start:end]
                if len(seg) > 1 and seg[0] == "0":
                    break
                val = int(seg)
                if val > 2 ** 31 - 1:
                    break
                if len(res) >= 2 and val > res[-1] + res[-2]:
                    break
                if len(res) < 2 or val == res[-1] + res[-2]:
                    res.append(val)
                    if backtrack(end):
                        return True
                    res.pop()
            return False

        backtrack(0)
        return res


if __name__ == "__main__":
    print(Solution().splitIntoFibonacci("123456579"))
