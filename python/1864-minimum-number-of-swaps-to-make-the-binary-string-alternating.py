class Solution:
    def minSwaps(self, s: str) -> int:
        n = len(s)
        ones = s.count('1')
        zeros = n - ones
        if abs(ones - zeros) > 1:
            return -1

        def cost(first):
            bad = 0
            for i, ch in enumerate(s):
                want = first if i % 2 == 0 else ('1' if first == '0' else '0')
                if ch != want:
                    bad += 1
            return bad // 2

        if ones == zeros:
            return min(cost('0'), cost('1'))
        return cost('1') if ones > zeros else cost('0')


if __name__ == "__main__":
    print(Solution().minSwaps("111000"))
