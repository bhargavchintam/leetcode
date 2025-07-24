class Solution:
    def countAsterisks(self, s: str) -> int:
        cnt = 0
        bar = False
        for ch in s:
            if ch == "|":
                bar = not bar
            elif ch == "*" and not bar:
                cnt += 1
        return cnt


if __name__ == "__main__":
    print(Solution().countAsterisks("l|*e*et|c**o|*de|"))
