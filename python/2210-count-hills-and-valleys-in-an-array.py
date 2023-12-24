from typing import List


class Solution:
    def countHillValley(self, nums: List[int]) -> int:
        vals = []
        for x in nums:
            if not vals or vals[-1] != x:
                vals.append(x)
        cnt = 0
        for i in range(1, len(vals) - 1):
            if vals[i - 1] < vals[i] > vals[i + 1] or vals[i - 1] > vals[i] < vals[i + 1]:
                cnt += 1
        return cnt


if __name__ == "__main__":
    print(Solution().countHillValley([2, 4, 1, 1, 6, 5]))
