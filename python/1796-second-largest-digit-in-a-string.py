class Solution:
    def secondHighest(self, s: str) -> int:
        digs = set()
        for c in s:
            if c.isdigit():
                digs.add(int(c))
        if len(digs) < 2:
            return -1
        return sorted(digs)[-2]


if __name__ == "__main__":
    print(Solution().secondHighest("dfa12321afd"))
