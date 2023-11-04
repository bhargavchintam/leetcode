import math


class Solution:
    def mirrorReflection(self, p: int, q: int) -> int:
        g = math.gcd(p, q)
        p, q = p // g, q // g
        if p % 2 == 0:
            return 2
        if q % 2 == 0:
            return 0
        return 1


if __name__ == "__main__":
    print(Solution().mirrorReflection(2, 1))
