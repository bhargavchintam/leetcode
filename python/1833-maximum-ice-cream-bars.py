from typing import List


class Solution:
    def maxIceCream(self, costs: List[int], coins: int) -> int:
        costs.sort()
        cnt = 0
        for c in costs:
            if coins >= c:
                coins -= c
                cnt += 1
            else:
                break
        return cnt


if __name__ == "__main__":
    print(Solution().maxIceCream([1, 3, 2, 4, 1], 7))
