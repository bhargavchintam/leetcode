class Solution:
    def strongPasswordCheckerII(self, password: str) -> bool:
        if len(password) < 8:
            return False
        special = "!@#$%^&*()-+"
        has_lower = has_upper = has_digit = has_special = False
        for i, ch in enumerate(password):
            if i > 0 and password[i - 1] == ch:
                return False
            if ch.islower():
                has_lower = True
            elif ch.isupper():
                has_upper = True
            elif ch.isdigit():
                has_digit = True
            elif ch in special:
                has_special = True
        return has_lower and has_upper and has_digit and has_special


if __name__ == "__main__":
    print(Solution().strongPasswordCheckerII("IloveLe3tcode!"))
