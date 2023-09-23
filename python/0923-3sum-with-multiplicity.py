from typing import List


class Solution:
    def threeSumMulti(self, arr: List[int], target: int) -> int:
        MOD = 10 ** 9 + 7
        cnt = [0] * 101
        for x in arr:
            cnt[x] += 1
        res = 0
        for i in range(101):
            for j in range(i, 101):
                k = target - i - j
                if k < j or k > 100:
                    continue
                if i == j == k:
                    res += cnt[i] * (cnt[i] - 1) * (cnt[i] - 2) // 6
                elif i == j:
                    res += cnt[i] * (cnt[i] - 1) // 2 * cnt[k]
                elif j == k:
                    res += cnt[i] * cnt[j] * (cnt[j] - 1) // 2
                else:
                    res += cnt[i] * cnt[j] * cnt[k]
        return res % MOD


if __name__ == "__main__":
    print(Solution().threeSumMulti([1, 1, 2, 2, 3, 3, 4, 4, 5, 5], 8))
