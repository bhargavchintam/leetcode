import string


class Solution:
    def greatestLetter(self, s: str) -> str:
        st = set(s)
        for c in reversed(string.ascii_uppercase):
            if c in st and c.lower() in st:
                return c
        return ""


if __name__ == "__main__":
    print(Solution().greatestLetter("lEeTcOdE"))
