from typing import List


class Solution:
    def isAlienSorted(self, words: List[str], order: str) -> bool:
        idx = {c: i for i, c in enumerate(order)}
        for a, b in zip(words, words[1:]):
            for x, y in zip(a, b):
                if x != y:
                    if idx[x] > idx[y]:
                        return False
                    break
            else:
                if len(a) > len(b):
                    return False
        return True


if __name__ == "__main__":
    print(Solution().isAlienSorted(["hello", "leetcode"], "hlabcdefgijkmnopqrstuvwxyz"))
