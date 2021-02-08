class Solution:
    def digitCount(self, num: str) -> bool:
        cnt = [0] * 10
        for ch in num:
            cnt[int(ch)] += 1
        for i, ch in enumerate(num):
            if cnt[i] != int(ch):
                return False
        return True


if __name__ == "__main__":
    print(Solution().digitCount("1210"))
