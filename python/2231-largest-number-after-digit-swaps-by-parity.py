class Solution:
    def largestInteger(self, num: int) -> int:
        s = list(str(num))
        odd = sorted([int(c) for c in s if int(c) % 2 == 1], reverse=True)
        even = sorted([int(c) for c in s if int(c) % 2 == 0], reverse=True)
        oi = ei = 0
        res = []
        for c in s:
            if int(c) % 2 == 1:
                res.append(str(odd[oi]))
                oi += 1
            else:
                res.append(str(even[ei]))
                ei += 1
        return int("".join(res))


if __name__ == "__main__":
    print(Solution().largestInteger(1234))
    print(Solution().largestInteger(65875))
