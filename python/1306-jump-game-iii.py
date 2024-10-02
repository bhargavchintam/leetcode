from typing import List


class Solution:
    def canReach(self, arr: List[int], start: int) -> bool:
        n = len(arr)
        seen = set()
        st = [start]
        while st:
            i = st.pop()
            if i < 0 or i >= n or i in seen:
                continue
            if arr[i] == 0:
                return True
            seen.add(i)
            st.append(i + arr[i])
            st.append(i - arr[i])
        return False


if __name__ == "__main__":
    print(Solution().canReach([4, 2, 3, 0, 3, 1, 2], 5))
