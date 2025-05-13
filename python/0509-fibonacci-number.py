class Solution:
    def fib(self, n: int) -> int:
        if n < 2:
            return n
        a, b = 0, 1
        for _ in range(n - 1):
            a, b = b, a + b
        return b


if __name__ == "__main__":
    print(Solution().fib(4))
    print(Solution().fib(2))
