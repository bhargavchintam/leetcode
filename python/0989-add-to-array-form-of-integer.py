from typing import List


class Solution:
    def addToArrayForm(self, num: List[int], k: int) -> List[int]:
        n = int("".join(map(str, num))) + k
        return [int(c) for c in str(n)]


if __name__ == "__main__":
    print(Solution().addToArrayForm([1, 2, 0, 0], 34))
