class Solution:
    def binaryGap(self, n: int) -> int:
        bits = [i for i, b in enumerate(bin(n)[2:]) if b == "1"]
        return max((b - a for a, b in zip(bits, bits[1:])), default=0)


if __name__ == "__main__":
    print(Solution().binaryGap(22))
