import bisect


class TimeMap:
    def __init__(self):
        self.mp = {}

    def set(self, key: str, value: str, timestamp: int) -> None:
        self.mp.setdefault(key, []).append((timestamp, value))

    def get(self, key: str, timestamp: int) -> str:
        arr = self.mp.get(key, [])
        i = bisect.bisect_right(arr, (timestamp, chr(0x10FFFF)))
        return arr[i - 1][1] if i else ""


if __name__ == "__main__":
    tm = TimeMap()
    tm.set("foo", "bar", 1)
    print(tm.get("foo", 1))
    print(tm.get("foo", 3))
    tm.set("foo", "bar2", 4)
    print(tm.get("foo", 4))
    print(tm.get("foo", 5))
