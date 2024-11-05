from typing import List


class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        res = []

        def bt(start, cur):
            res.append(cur[:])
            for i in range(start, len(nums)):
                cur.append(nums[i])
                bt(i + 1, cur)
                cur.pop()

        bt(0, [])
        return res


if __name__ == "__main__":
    print(Solution().subsets([1, 2, 3]))
