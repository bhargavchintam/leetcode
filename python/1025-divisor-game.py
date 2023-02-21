class Solution:
    def divisorGame(self, n: int) -> bool:
        return n % 2 == 0


if __name__ == "__main__":
    print(Solution().divisorGame(2))
