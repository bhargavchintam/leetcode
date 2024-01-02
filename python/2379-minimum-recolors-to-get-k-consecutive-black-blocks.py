class Solution:
    def minimumRecolors(self, blocks: str, k: int) -> int:
        cnt = blocks[:k].count('W')
        res = cnt
        for i in range(k, len(blocks)):
            if blocks[i] == 'W':
                cnt += 1
            if blocks[i - k] == 'W':
                cnt -= 1
            res = min(res, cnt)
        return res


if __name__ == "__main__":
    print(Solution().minimumRecolors("WBBWWBBWBW", 7))
