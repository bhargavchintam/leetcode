from typing import List
from collections import Counter


class Solution:
    def leastInterval(self, tasks: List[str], n: int) -> int:
        cnt = Counter(tasks)
        mx = max(cnt.values())
        mx_cnt = sum(1 for v in cnt.values() if v == mx)
        return max(len(tasks), (mx - 1) * (n + 1) + mx_cnt)


if __name__ == "__main__":
    print(Solution().leastInterval(["A", "A", "A", "B", "B", "B"], 2))
    print(Solution().leastInterval(["A", "A", "A", "B", "B", "B"], 0))
