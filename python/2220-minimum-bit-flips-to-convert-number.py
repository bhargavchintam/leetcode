class Solution:
    def minBitFlips(self, start: int, goal: int) -> int:
        return bin(start ^ goal).count('1')


if __name__ == "__main__":
    print(Solution().minBitFlips(10, 7))
    print(Solution().minBitFlips(3, 4))
