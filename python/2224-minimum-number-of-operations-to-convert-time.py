class Solution:
    def convertTime(self, current: str, correct: str) -> int:
        def toMin(t):
            h, m = t.split(':')
            return int(h) * 60 + int(m)

        diff = toMin(correct) - toMin(current)
        ops = 0
        for step in (60, 15, 5, 1):
            ops += diff // step
            diff %= step
        return ops


if __name__ == "__main__":
    print(Solution().convertTime("02:30", "04:35"))
    print(Solution().convertTime("11:00", "11:01"))
