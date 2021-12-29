from collections import defaultdict
from typing import List


class Solution:
    def subdomainVisits(self, cpdomains: List[str]) -> List[str]:
        cnt = defaultdict(int)
        for cd in cpdomains:
            c, dom = cd.split()
            c = int(c)
            parts = dom.split(".")
            for i in range(len(parts)):
                cnt[".".join(parts[i:])] += c
        return [f"{v} {k}" for k, v in cnt.items()]


if __name__ == "__main__":
    print(Solution().subdomainVisits(["9001 discuss.leetcode.com"]))
