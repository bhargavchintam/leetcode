class Solution:
    def minRemoveToMakeValid(self, s: str) -> str:
        st = []
        remove = set()
        for i, c in enumerate(s):
            if c == '(':
                st.append(i)
            elif c == ')':
                if st:
                    st.pop()
                else:
                    remove.add(i)
        remove |= set(st)
        return ''.join(c for i, c in enumerate(s) if i not in remove)


if __name__ == "__main__":
    print(Solution().minRemoveToMakeValid("lee(t(c)o)de)"))
