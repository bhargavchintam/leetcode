class Solution:
    def isThree(self, n: int) -> bool:
        cnt = 0
        i = 1
        while i * i <= n:
            if n % i == 0:
                cnt += 1 if i * i == n else 2
            i += 1
        return cnt == 3


if __name__ == "__main__":
    print(Solution().isThree(4))
