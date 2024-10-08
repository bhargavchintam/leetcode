from typing import List


class Solution:
    def calculateTax(self, brackets: List[List[int]], income: int) -> float:
        res = 0.0
        prev = 0
        for upper, percent in brackets:
            if income <= prev:
                break
            cur = min(income, upper)
            res += (cur - prev) * percent / 100
            prev = upper
        return res


if __name__ == "__main__":
    print(Solution().calculateTax([[3, 50], [7, 10], [12, 25]], 10))
