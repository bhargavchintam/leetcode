from typing import List


class Solution:
    def findRestaurant(self, list1: List[str], list2: List[str]) -> List[str]:
        idx = {name: i for i, name in enumerate(list1)}
        best = float('inf')
        res = []
        for j, name in enumerate(list2):
            if name in idx:
                total = idx[name] + j
                if total < best:
                    best = total
                    res = [name]
                elif total == best:
                    res.append(name)
        return res


if __name__ == "__main__":
    print(Solution().findRestaurant(
        ["Shogun", "Tapioca Express", "Burger King", "KFC"],
        ["Piatti", "The Grill at Torrey Pines", "Hungry Hunter Steakhouse", "Shogun"]
    ))
