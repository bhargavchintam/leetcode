class Solution:
    def toGoatLatin(self, sentence: str) -> str:
        vowels = set("aeiouAEIOU")
        words = sentence.split()
        res = []
        for i, w in enumerate(words):
            if w[0] not in vowels:
                w = w[1:] + w[0]
            w += "ma" + "a" * (i + 1)
            res.append(w)
        return " ".join(res)


if __name__ == "__main__":
    print(Solution().toGoatLatin("I speak Goat Latin"))
