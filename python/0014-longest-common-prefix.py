from typing import List


class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if not strs:
            return ""
        pre = strs[0]
        for s in strs[1:]:
            while not s.startswith(pre):
                pre = pre[:-1]
                if not pre:
                    return ""
        return pre


if __name__ == "__main__":
    print(Solution().longestCommonPrefix(["flower", "flow", "flight"]))
