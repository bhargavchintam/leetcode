class Solution:
    def countTriples(self, n: int) -> int:
        cnt = 0
        for a in range(1, n + 1):
            for b in range(a, n + 1):
                c2 = a * a + b * b
                c = int(c2 ** 0.5)
                if c <= n and c * c == c2:
                    cnt += 2
        return cnt


if __name__ == "__main__":
    print(Solution().countTriples(5))
