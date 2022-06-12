class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False
        s = str(x)
        return s == s[::-1]


if __name__ == "__main__":
    print(Solution().isPalindrome(121))
