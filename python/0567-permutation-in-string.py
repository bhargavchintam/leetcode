class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        n, m = len(s1), len(s2)
        if n > m:
            return False
        need = [0] * 26
        window = [0] * 26
        for ch in s1:
            need[ord(ch) - ord('a')] += 1
        for i in range(m):
            window[ord(s2[i]) - ord('a')] += 1
            if i >= n:
                window[ord(s2[i - n]) - ord('a')] -= 1
            if window == need:
                return True
        return False


if __name__ == "__main__":
    print(Solution().checkInclusion("ab", "eidbaooo"))
