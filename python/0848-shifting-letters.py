from typing import List


class Solution:
    def shiftingLetters(self, s: str, shifts: List[int]) -> str:
        total = sum(shifts) % 26
        res = []
        for i, c in enumerate(s):
            shift = total % 26
            res.append(chr((ord(c) - 97 + shift) % 26 + 97))
            total -= shifts[i]
        return "".join(res)


if __name__ == "__main__":
    print(Solution().shiftingLetters("abc", [3, 5, 9]))
