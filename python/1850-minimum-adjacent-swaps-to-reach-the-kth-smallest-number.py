class Solution:
    def getMinSwaps(self, num: str, k: int) -> int:
        def next_perm(d):
            d = d[:]
            n = len(d)
            i = n - 2
            while i >= 0 and d[i] >= d[i + 1]:
                i -= 1
            j = n - 1
            while d[j] <= d[i]:
                j -= 1
            d[i], d[j] = d[j], d[i]
            d[i + 1:] = reversed(d[i + 1:])
            return d

        start = list(num)
        target = list(num)
        for _ in range(k):
            target = next_perm(target)
        cnt = 0
        for i in range(len(start)):
            if start[i] != target[i]:
                j = i + 1
                while start[j] != target[i]:
                    j += 1
                while j > i:
                    start[j], start[j - 1] = start[j - 1], start[j]
                    j -= 1
                    cnt += 1
        return cnt


if __name__ == "__main__":
    print(Solution().getMinSwaps("5489355142", 4))
