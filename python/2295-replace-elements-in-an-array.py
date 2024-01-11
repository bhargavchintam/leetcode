from typing import List


class Solution:
    def arrayChange(self, nums: List[int], operations: List[List[int]]) -> List[int]:
        idx = {x: i for i, x in enumerate(nums)}
        for a, b in operations:
            i = idx[a]
            nums[i] = b
            idx[b] = i
            del idx[a]
        return nums


if __name__ == "__main__":
    print(Solution().arrayChange([1, 2, 4, 6], [[1, 3], [4, 7], [6, 1]]))
