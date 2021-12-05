class Solution:
    def reinitializePermutation(self, n: int) -> int:
        pos = 1
        cnt = 0
        while True:
            pos = pos // 2 if pos % 2 == 0 else n // 2 + (pos - 1) // 2
            cnt += 1
            if pos == 1:
                return cnt


if __name__ == "__main__":
    print(Solution().reinitializePermutation(4))
