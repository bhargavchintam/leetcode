class Solution:
    def rotateString(self, s: str, goal: str) -> bool:
        return len(s) == len(goal) and goal in s + s


if __name__ == "__main__":
    print(Solution().rotateString("abcde", "cdeab"))
