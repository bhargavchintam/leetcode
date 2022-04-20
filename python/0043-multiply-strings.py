class Solution:
    def multiply(self, num1: str, num2: str) -> str:
        if num1 == "0" or num2 == "0":
            return "0"
        n, m = len(num1), len(num2)
        res = [0] * (n + m)
        for i in range(n - 1, -1, -1):
            for j in range(m - 1, -1, -1):
                mul = int(num1[i]) * int(num2[j])
                p1, p2 = i + j, i + j + 1
                total = mul + res[p2]
                res[p2] = total % 10
                res[p1] += total // 10
        s = "".join(map(str, res)).lstrip("0")
        return s


if __name__ == "__main__":
    print(Solution().multiply("123", "456"))
