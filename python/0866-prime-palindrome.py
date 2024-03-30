class Solution:
    def primePalindrome(self, n: int) -> int:
        def is_prime(x):
            if x < 2:
                return False
            if x < 4:
                return True
            if x % 2 == 0:
                return False
            i = 3
            while i * i <= x:
                if x % i == 0:
                    return False
                i += 2
            return True

        if n <= 2:
            return 2
        if n <= 3:
            return 3
        if n <= 5:
            return 5
        if n <= 7:
            return 7
        length = len(str(n))
        while True:
            half_len = (length + 1) // 2
            start = 10 ** (half_len - 1)
            end = 10 ** half_len
            for half in range(start, end):
                s = str(half)
                pal = s + s[-2::-1] if length % 2 else s + s[::-1]
                num = int(pal)
                if num >= n and is_prime(num):
                    return num
            length += 1


if __name__ == "__main__":
    print(Solution().primePalindrome(6))
