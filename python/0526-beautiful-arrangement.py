class Solution:
    def countArrangement(self, n: int) -> int:
        used = [False] * (n + 1)

        def backtrack(pos):
            if pos > n:
                return 1
            cnt = 0
            for num in range(1, n + 1):
                if not used[num] and (num % pos == 0 or pos % num == 0):
                    used[num] = True
                    cnt += backtrack(pos + 1)
                    used[num] = False
            return cnt

        return backtrack(1)


if __name__ == "__main__":
    print(Solution().countArrangement(2))
