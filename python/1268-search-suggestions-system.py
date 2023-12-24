from typing import List
import bisect


class Solution:
    def suggestedProducts(self, products: List[str], searchWord: str) -> List[List[str]]:
        products.sort()
        res = []
        prefix = ""
        for ch in searchWord:
            prefix += ch
            i = bisect.bisect_left(products, prefix)
            cand = []
            for j in range(i, min(i + 3, len(products))):
                if products[j].startswith(prefix):
                    cand.append(products[j])
            res.append(cand)
        return res


if __name__ == "__main__":
    products = ["mobile", "mouse", "moneypot", "monitor", "mousepad"]
    print(Solution().suggestedProducts(products, "mouse"))
