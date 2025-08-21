class Solution:
    def solveEquation(self, equation: str) -> str:
        left, right = equation.split("=")

        def parse(s):
            coef = 0
            const = 0
            i = 0
            n = len(s)
            sign = 1
            while i < n:
                if s[i] == "+":
                    sign = 1
                    i += 1
                    continue
                if s[i] == "-":
                    sign = -1
                    i += 1
                    continue
                j = i
                while j < n and s[j] not in "+-":
                    j += 1
                term = s[i:j]
                if term[-1] == "x":
                    num = term[:-1]
                    if num == "":
                        num = "1"
                    coef += sign * int(num)
                else:
                    const += sign * int(term)
                i = j
            return coef, const

        lc, lk = parse(left)
        rc, rk = parse(right)
        coef = lc - rc
        const = rk - lk
        if coef == 0:
            return "Infinite solutions" if const == 0 else "No solution"
        return "x=" + str(const // coef)


if __name__ == "__main__":
    print(Solution().solveEquation("x+5-3+x=6+x-2"))
    print(Solution().solveEquation("x=x"))
    print(Solution().solveEquation("2x=x"))
