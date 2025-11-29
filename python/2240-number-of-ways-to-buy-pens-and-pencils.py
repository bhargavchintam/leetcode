class Solution:
    def waysToBuyPensPencils(self, total: int, cost1: int, cost2: int) -> int:
        res = 0
        i = 0
        while i * cost1 <= total:
            res += (total - i * cost1) // cost2 + 1
            i += 1
        return res


if __name__ == "__main__":
    print(Solution().waysToBuyPensPencils(20, 10, 5))
    print(Solution().waysToBuyPensPencils(5, 10, 10))
