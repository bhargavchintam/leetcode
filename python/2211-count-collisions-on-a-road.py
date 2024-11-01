class Solution:
    def countCollisions(self, directions: str) -> int:
        s = directions.lstrip('L').rstrip('R')
        return len(s) - s.count('S')


if __name__ == "__main__":
    print(Solution().countCollisions("RLRSLL"))
