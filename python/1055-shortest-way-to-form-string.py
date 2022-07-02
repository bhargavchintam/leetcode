class Solution:
    def shortestWay(self, source: str, target: str) -> int:
        res = 0
        i = 0
        n = len(target)
        while i < n:
            start = i
            for c in source:
                if i < n and c == target[i]:
                    i += 1
            if i == start:
                return -1
            res += 1
        return res


if __name__ == "__main__":
    print(Solution().shortestWay("abc", "abcbc"))
