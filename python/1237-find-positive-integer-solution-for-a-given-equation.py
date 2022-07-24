from typing import List


class CustomFunction:
    def f(self, x: int, y: int) -> int:
        return x + y


class Solution:
    def findSolution(self, customfunction: 'CustomFunction', z: int) -> List[List[int]]:
        res = []
        x = 1
        y = 1000
        while x <= 1000 and y >= 1:
            val = customfunction.f(x, y)
            if val == z:
                res.append([x, y])
                x += 1
                y -= 1
            elif val < z:
                x += 1
            else:
                y -= 1
        return res


if __name__ == "__main__":
    print(Solution().findSolution(CustomFunction(), 5))
