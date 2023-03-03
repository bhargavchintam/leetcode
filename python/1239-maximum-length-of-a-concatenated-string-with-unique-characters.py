from typing import List


class Solution:
    def maxLength(self, arr: List[str]) -> int:
        masks = []
        for s in arr:
            if len(set(s)) < len(s):
                continue
            m = 0
            for c in s:
                m |= 1 << (ord(c) - 97)
            masks.append(m)
        self.res = 0

        def bt(i, cur):
            self.res = max(self.res, bin(cur).count('1'))
            for j in range(i, len(masks)):
                if cur & masks[j] == 0:
                    bt(j + 1, cur | masks[j])

        bt(0, 0)
        return self.res


if __name__ == "__main__":
    print(Solution().maxLength(["un", "iq", "ue"]))
