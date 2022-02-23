#include <stdio.h>
#include <string.h>

int longestPalindrome(char* s) {
    int cnt[128] = {0};
    int n = strlen(s);
    for (int i = 0; i < n; i++) cnt[(int)s[i]]++;
    int res = 0;
    int hasOdd = 0;
    for (int i = 0; i < 128; i++) {
        res += (cnt[i] / 2) * 2;
        if (cnt[i] % 2 == 1) hasOdd = 1;
    }
    return res + hasOdd;
}

int main() {
    printf("%d\n", longestPalindrome("abccccdd"));
    printf("%d\n", longestPalindrome("a"));
    return 0;
}
