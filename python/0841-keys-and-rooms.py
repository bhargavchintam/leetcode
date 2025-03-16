from typing import List


class Solution:
    def canVisitAllRooms(self, rooms: List[List[int]]) -> bool:
        n = len(rooms)
        seen = {0}
        stack = [0]
        while stack:
            node = stack.pop()
            for k in rooms[node]:
                if k not in seen:
                    seen.add(k)
                    stack.append(k)
        return len(seen) == n


if __name__ == "__main__":
    print(Solution().canVisitAllRooms([[1], [2], [3], []]))
