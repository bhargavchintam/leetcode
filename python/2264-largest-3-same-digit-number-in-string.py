class Solution:
    def largestGoodInteger(self, num: str) -> str:
        res = ""
        for i in range(len(num) - 2):
            if num[i] == num[i + 1] == num[i + 2]:
                cand = num[i:i + 3]
                if cand > res:
                    res = cand
        return res


if __name__ == "__main__":
    print(Solution().largestGoodInteger("6777133339"))
