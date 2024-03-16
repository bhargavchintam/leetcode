class Solution:
    def mySqrt(self, x: int) -> int:
        if x < 2:
            return x
        lo, hi = 1, x // 2
        while lo <= hi:
            mid = (lo + hi) // 2
            if mid * mid == x:
                return mid
            if mid * mid < x:
                lo = mid + 1
            else:
                hi = mid - 1
        return hi


if __name__ == "__main__":
    print(Solution().mySqrt(8))
