class Solution:
    def nthPersonGetsNthSeat(self, n: int) -> float:
        return 1.0 if n == 1 else 0.5


if __name__ == "__main__":
    print(Solution().nthPersonGetsNthSeat(2))
