class Solution:
    def getLucky(self, s: str, k: int) -> int:
        t = ''.join(str(ord(c) - 96) for c in s)
        for _ in range(k):
            t = str(sum(int(d) for d in t))
        return int(t)


if __name__ == "__main__":
    print(Solution().getLucky("iiii", 1))
