from typing import List


class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        res = []

        def bt(cur, remain):
            if not remain:
                res.append(cur[:])
                return
            for i in range(len(remain)):
                cur.append(remain[i])
                bt(cur, remain[:i] + remain[i + 1:])
                cur.pop()

        bt([], nums)
        return res


if __name__ == "__main__":
    print(Solution().permute([1, 2, 3]))
