from typing import List


class Solution:
    def removeSubfolders(self, folder: List[str]) -> List[str]:
        folder.sort()
        res = [folder[0]]
        for f in folder[1:]:
            last = res[-1]
            if not (f.startswith(last) and f[len(last)] == '/'):
                res.append(f)
        return res


if __name__ == "__main__":
    print(Solution().removeSubfolders(["/a", "/a/b", "/c/d", "/c/d/e", "/c/f"]))
