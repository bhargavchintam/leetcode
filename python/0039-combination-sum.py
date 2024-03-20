from typing import List


class Solution:
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        res = []
        candidates.sort()

        def bt(start, cur, remain):
            if remain == 0:
                res.append(cur[:])
                return
            for i in range(start, len(candidates)):
                c = candidates[i]
                if c > remain:
                    break
                cur.append(c)
                bt(i, cur, remain - c)
                cur.pop()

        bt(0, [], target)
        return res


if __name__ == "__main__":
    print(Solution().combinationSum([2, 3, 6, 7], 7))
