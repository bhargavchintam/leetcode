from typing import List


class Solution:
    def numFriendRequests(self, ages: List[int]) -> int:
        cnt = [0] * 121
        for a in ages:
            cnt[a] += 1
        res = 0
        for a in range(1, 121):
            for b in range(1, 121):
                if cnt[a] == 0 or cnt[b] == 0:
                    continue
                if b <= 0.5 * a + 7:
                    continue
                if b > a:
                    continue
                if b > 100 and a < 100:
                    continue
                res += cnt[a] * cnt[b]
                if a == b:
                    res -= cnt[a]
        return res


if __name__ == "__main__":
    print(Solution().numFriendRequests([16, 16]))
