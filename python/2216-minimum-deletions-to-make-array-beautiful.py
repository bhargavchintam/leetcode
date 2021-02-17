from typing import List


class Solution:
    def minDeletion(self, nums: List[int]) -> int:
        res = []
        for x in nums:
            if len(res) % 2 == 1 and res[-1] == x:
                continue
            res.append(x)
        if len(res) % 2 == 1:
            res.pop()
        return len(nums) - len(res)


if __name__ == "__main__":
    print(Solution().minDeletion([1, 1, 2, 3, 5]))
    print(Solution().minDeletion([1, 1, 2, 2, 3, 3]))
