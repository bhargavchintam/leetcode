from typing import List


class Solution:
    def findReplaceString(self, s: str, indices: List[int], sources: List[str], targets: List[str]) -> str:
        ops = sorted(zip(indices, sources, targets), key=lambda x: -x[0])
        chars = list(s)
        for i, src, tgt in ops:
            if chars[i:i + len(src)] == list(src):
                chars[i:i + len(src)] = list(tgt)
        return "".join(chars)


if __name__ == "__main__":
    print(Solution().findReplaceString("abcd", [0, 2], ["a", "cd"], ["eee", "ffff"]))
