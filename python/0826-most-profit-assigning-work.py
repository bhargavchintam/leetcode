from typing import List


class Solution:
    def maxProfitAssignment(self, difficulty: List[int], profit: List[int], worker: List[int]) -> int:
        jobs = sorted(zip(difficulty, profit))
        worker.sort()
        res = 0
        best = 0
        i = 0
        for w in worker:
            while i < len(jobs) and jobs[i][0] <= w:
                best = max(best, jobs[i][1])
                i += 1
            res += best
        return res


if __name__ == "__main__":
    difficulty = [2, 4, 6, 8, 10]
    profit = [10, 20, 30, 40, 50]
    worker = [4, 5, 6, 7]
    print(Solution().maxProfitAssignment(difficulty, profit, worker))
