class Solution:
    def checkOnesSegment(self, s: str) -> bool:
        return "01" not in s


if __name__ == "__main__":
    print(Solution().checkOnesSegment("1001"))
