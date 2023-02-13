class Solution:
    def smallestNumber(self, num: int) -> int:
        neg = num < 0
        digits = sorted(str(abs(num)))
        if neg:
            digits.sort(reverse=True)
            return -int("".join(digits))
        if digits[0] == "0":
            for i in range(1, len(digits)):
                if digits[i] != "0":
                    digits[0], digits[i] = digits[i], digits[0]
                    break
        return int("".join(digits))


if __name__ == "__main__":
    print(Solution().smallestNumber(310))
    print(Solution().smallestNumber(-7605))
