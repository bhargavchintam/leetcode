class Solution:
    def backspaceCompare(self, s: str, t: str) -> bool:
        def build(x):
            st = []
            for c in x:
                if c != "#":
                    st.append(c)
                elif st:
                    st.pop()
            return "".join(st)

        return build(s) == build(t)


if __name__ == "__main__":
    print(Solution().backspaceCompare("ab#c", "ad#c"))
