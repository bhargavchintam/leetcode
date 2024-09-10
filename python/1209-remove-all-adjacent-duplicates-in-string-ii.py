class Solution:
    def removeDuplicates(self, s: str, k: int) -> str:
        st = []
        for c in s:
            if st and st[-1][0] == c:
                st[-1][1] += 1
                if st[-1][1] == k:
                    st.pop()
            else:
                st.append([c, 1])
        return ''.join(c * n for c, n in st)


if __name__ == "__main__":
    print(Solution().removeDuplicates("deeedbbcccbdaa", 3))
