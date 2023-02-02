class Solution:
    def countEven(self, num: int) -> int:
        cnt = 0
        for i in range(1, num + 1):
            s = 0
            n = i
            while n:
                s += n % 10
                n //= 10
            if s % 2 == 0:
                cnt += 1
        return cnt


if __name__ == "__main__":
    print(Solution().countEven(4))
    print(Solution().countEven(30))
