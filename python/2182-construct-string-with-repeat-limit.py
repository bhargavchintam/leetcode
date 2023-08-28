class Solution:
    def repeatLimitedString(self, s: str, repeatLimit: int) -> str:
        cnt = [0] * 26
        for ch in s:
            cnt[ord(ch) - 97] += 1
        res = []
        i = 25
        while i >= 0:
            if cnt[i] == 0:
                i -= 1
                continue
            take = min(cnt[i], repeatLimit)
            res.append(chr(97 + i) * take)
            cnt[i] -= take
            if cnt[i] > 0:
                j = i - 1
                while j >= 0 and cnt[j] == 0:
                    j -= 1
                if j < 0:
                    break
                res.append(chr(97 + j))
                cnt[j] -= 1
            else:
                i -= 1
        return "".join(res)


if __name__ == "__main__":
    print(Solution().repeatLimitedString("cczazcc", 3))
    print(Solution().repeatLimitedString("aababab", 2))
