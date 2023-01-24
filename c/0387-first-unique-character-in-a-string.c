#include <stdio.h>
#include <string.h>

int firstUniqChar(char* s) {
    int cnt[26] = {0};
    int n = strlen(s);
    for (int i = 0; i < n; i++) cnt[s[i] - 'a']++;
    for (int i = 0; i < n; i++) {
        if (cnt[s[i] - 'a'] == 1) return i;
    }
    return -1;
}

int main() {
    printf("%d\n", firstUniqChar("leetcode"));
    printf("%d\n", firstUniqChar("loveleetcode"));
    printf("%d\n", firstUniqChar("aabb"));
    return 0;
}
