#include <stdio.h>
#include <string.h>

static int isVowel(char c) {
    return strchr("aeiouAEIOU", c) != NULL;
}

char* reverseVowels(char* s) {
    int l = 0, r = strlen(s) - 1;
    while (l < r) {
        if (!isVowel(s[l])) { l++; continue; }
        if (!isVowel(s[r])) { r--; continue; }
        char t = s[l];
        s[l] = s[r];
        s[r] = t;
        l++;
        r--;
    }
    return s;
}

int main() {
    char s1[] = "hello";
    char s2[] = "leetcode";
    printf("%s\n", reverseVowels(s1));
    printf("%s\n", reverseVowels(s2));
    return 0;
}
