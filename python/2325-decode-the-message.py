class Solution:
    def decodeMessage(self, key: str, message: str) -> str:
        mp = {' ': ' '}
        c = ord('a')
        for ch in key:
            if ch != ' ' and ch not in mp:
                mp[ch] = chr(c)
                c += 1
        return ''.join(mp[ch] for ch in message)


if __name__ == "__main__":
    print(Solution().decodeMessage("the quick brown fox jumps over the lazy dog", "vkbs bs t suepuv"))
