from typing import List


class Solution:
    def validateStackSequences(self, pushed: List[int], popped: List[int]) -> bool:
        st = []
        i = 0
        for x in pushed:
            st.append(x)
            while st and st[-1] == popped[i]:
                st.pop()
                i += 1
        return not st


if __name__ == "__main__":
    print(Solution().validateStackSequences([1, 2, 3, 4, 5], [4, 5, 3, 2, 1]))
