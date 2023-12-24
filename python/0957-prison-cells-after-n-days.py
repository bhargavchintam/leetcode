from typing import List


class Solution:
    def prisonAfterNDays(self, cells: List[int], n: int) -> List[int]:
        def nxt(s):
            return tuple(1 if 0 < j < 7 and s[j - 1] == s[j + 1] else 0 for j in range(8))

        seen = {}
        state = tuple(cells)
        i = 0
        while i < n:
            if state in seen:
                cycle = i - seen[state]
                n = i + (n - i) % cycle
                break
            seen[state] = i
            state = nxt(state)
            i += 1
        while i < n:
            state = nxt(state)
            i += 1
        return list(state)


if __name__ == "__main__":
    print(Solution().prisonAfterNDays([0, 1, 0, 1, 1, 0, 0, 1], 7))
