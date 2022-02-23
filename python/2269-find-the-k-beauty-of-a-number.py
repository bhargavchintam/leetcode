class Solution:
    def divisorSubstrings(self, num: int, k: int) -> int:
        s = str(num)
        cnt = 0
        for i in range(len(s) - k + 1):
            x = int(s[i:i + k])
            if x != 0 and num % x == 0:
                cnt += 1
        return cnt


if __name__ == "__main__":
    print(Solution().divisorSubstrings(240, 2))
