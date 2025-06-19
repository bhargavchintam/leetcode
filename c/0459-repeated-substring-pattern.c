#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool repeatedSubstringPattern(char* s) {
    int n = strlen(s);
    for (int l = 1; l <= n / 2; l++) {
        if (n % l != 0) continue;
        bool ok = true;
        for (int i = l; i < n; i++) {
            if (s[i] != s[i % l]) {
                ok = false;
                break;
            }
        }
        if (ok) return true;
    }
    return false;
}

int main() {
    printf("%d\n", repeatedSubstringPattern("abab"));
    printf("%d\n", repeatedSubstringPattern("aba"));
    printf("%d\n", repeatedSubstringPattern("abcabcabcabc"));
    return 0;
}
