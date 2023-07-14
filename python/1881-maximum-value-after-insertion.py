class Solution:
    def maxValue(self, n: str, x: int) -> str:
        neg = n[0] == '-'
        digits = list(n)
        body = digits[1:] if neg else digits
        i = 0
        if neg:
            while i < len(body) and int(body[i]) <= x:
                i += 1
        else:
            while i < len(body) and int(body[i]) >= x:
                i += 1
        body.insert(i, str(x))
        return ('-' if neg else '') + ''.join(body)


if __name__ == "__main__":
    print(Solution().maxValue("99", 9))
