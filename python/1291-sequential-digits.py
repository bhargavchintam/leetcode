from typing import List


class Solution:
    def sequentialDigits(self, low: int, high: int) -> List[int]:
        res = []
        s = "123456789"
        for length in range(1, 10):
            for start in range(0, 10 - length):
                num = int(s[start:start + length])
                if low <= num <= high:
                    res.append(num)
        res.sort()
        return res


if __name__ == "__main__":
    print(Solution().sequentialDigits(100, 300))
