from typing import List


class Solution:
    def sortJumbled(self, mapping: List[int], nums: List[int]) -> List[int]:
        def val(x):
            if x == 0:
                return mapping[0]
            digits = []
            n = x
            while n:
                digits.append(mapping[n % 10])
                n //= 10
            digits.reverse()
            r = 0
            for d in digits:
                r = r * 10 + d
            return r

        return sorted(nums, key=val)


if __name__ == "__main__":
    print(Solution().sortJumbled([8, 9, 4, 0, 2, 1, 3, 5, 7, 6], [991, 338, 38]))
    print(Solution().sortJumbled([0, 1, 2, 3, 4, 5, 6, 7, 8, 9], [123, 456, 789]))
