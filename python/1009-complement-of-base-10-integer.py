class Solution:
    def bitwiseComplement(self, n: int) -> int:
        if n == 0:
            return 1
        mask = 1
        while mask < n:
            mask = mask * 2 + 1
        return mask ^ n


if __name__ == "__main__":
    print(Solution().bitwiseComplement(5))
