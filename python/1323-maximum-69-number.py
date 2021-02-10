class Solution:
    def maximum69Number(self, num: int) -> int:
        s = list(str(num))
        for i, c in enumerate(s):
            if c == '6':
                s[i] = '9'
                break
        return int(''.join(s))


if __name__ == "__main__":
    print(Solution().maximum69Number(9669))
