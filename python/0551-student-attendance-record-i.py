class Solution:
    def checkRecord(self, s: str) -> bool:
        return s.count("A") < 2 and "LLL" not in s


if __name__ == "__main__":
    print(Solution().checkRecord("PPALLP"))
    print(Solution().checkRecord("PPALLL"))
