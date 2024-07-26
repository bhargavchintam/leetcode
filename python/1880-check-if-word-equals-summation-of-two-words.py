class Solution:
    def isSumEqual(self, firstWord: str, secondWord: str, targetWord: str) -> bool:
        def val(w):
            return int(''.join(str(ord(c) - 97) for c in w))

        return val(firstWord) + val(secondWord) == val(targetWord)


if __name__ == "__main__":
    print(Solution().isSumEqual("acb", "cba", "cdb"))
