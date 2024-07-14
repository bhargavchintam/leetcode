from math import gcd


class Solution:
    def nthUglyNumber(self, n: int, a: int, b: int, c: int) -> int:
        def lcm(x, y):
            return x * y // gcd(x, y)

        ab, ac, bc = lcm(a, b), lcm(a, c), lcm(b, c)
        abc = lcm(ab, c)
        lo, hi = 1, 2 * 10 ** 9
        while lo < hi:
            mid = (lo + hi) // 2
            cnt = mid // a + mid // b + mid // c - mid // ab - mid // ac - mid // bc + mid // abc
            if cnt < n:
                lo = mid + 1
            else:
                hi = mid
        return lo


if __name__ == "__main__":
    print(Solution().nthUglyNumber(3, 2, 3, 5))
