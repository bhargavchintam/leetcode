class Solution:
    def convertToBase7(self, num: int) -> str:
        if num == 0:
            return "0"
        neg = num < 0
        num = abs(num)
        digits = []
        while num:
            digits.append(str(num % 7))
            num //= 7
        if neg:
            digits.append("-")
        return "".join(reversed(digits))


if __name__ == "__main__":
    print(Solution().convertToBase7(100))
    print(Solution().convertToBase7(-7))
