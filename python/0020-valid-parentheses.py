class Solution:
    def isValid(self, s: str) -> bool:
        st = []
        pairs = {")": "(", "]": "[", "}": "{"}
        for c in s:
            if c in pairs:
                if not st or st.pop() != pairs[c]:
                    return False
            else:
                st.append(c)
        return not st


if __name__ == "__main__":
    print(Solution().isValid("()[]{}"))
