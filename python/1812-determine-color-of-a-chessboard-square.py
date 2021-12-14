class Solution:
    def squareIsWhite(self, coordinates: str) -> bool:
        col = ord(coordinates[0]) - ord('a')
        row = int(coordinates[1]) - 1
        return (col + row) % 2 == 1


if __name__ == "__main__":
    print(Solution().squareIsWhite("a1"))
