class Solution:
    def judgeSquareSum(self, c: int) -> bool:
        a = 0
        b = int(c ** 0.5)
        while a <= b:
            s = a * a + b * b
            if s == c:
                return True
            if s < c:
                a += 1
            else:
                b -= 1
        return False


if __name__ == "__main__":
    print(Solution().judgeSquareSum(5))
    print(Solution().judgeSquareSum(3))
