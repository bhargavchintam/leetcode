#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* smallestSubsequence(char* s) {
    int n = strlen(s);
    int cnt[26] = {0};
    int inres[26] = {0};
    for (int i = 0; i < n; i++) cnt[s[i] - 'a']++;
    char* st = malloc(27);
    int top = 0;
    for (int i = 0; i < n; i++) {
        int c = s[i] - 'a';
        cnt[c]--;
        if (inres[c]) continue;
        while (top > 0 && st[top - 1] > s[i] && cnt[st[top - 1] - 'a'] > 0) {
            inres[st[top - 1] - 'a'] = 0;
            top--;
        }
        st[top++] = s[i];
        inres[c] = 1;
    }
    st[top] = '\0';
    return st;
}

int main() {
    char* res = smallestSubsequence("bcabc");
    printf("%s\n", res);
    free(res);
    return 0;
}
