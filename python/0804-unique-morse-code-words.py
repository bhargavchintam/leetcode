from typing import List


class Solution:
    def uniqueMorseRepresentations(self, words: List[str]) -> int:
        morse = [".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..",
                 ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.",
                 "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."]
        seen = {"".join(morse[ord(c) - 97] for c in w) for w in words}
        return len(seen)


if __name__ == "__main__":
    print(Solution().uniqueMorseRepresentations(["gin", "zen", "gig", "msg"]))
