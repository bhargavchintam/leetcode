class Codec:
    def __init__(self):
        self.mp = {}
        self.i = 0

    def encode(self, longUrl: str) -> str:
        self.i += 1
        code = "http://tinyurl.com/" + str(self.i)
        self.mp[code] = longUrl
        return code

    def decode(self, shortUrl: str) -> str:
        return self.mp[shortUrl]


if __name__ == "__main__":
    codec = Codec()
    url = "https://leetcode.com/problems/design-tinyurl"
    short = codec.encode(url)
    print(codec.decode(short) == url)
