#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* licenseKeyFormatting(char* s, int k) {
    int n = strlen(s);
    char* clean = malloc(n + 1);
    int cleanLen = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] != '-') clean[cleanLen++] = toupper(s[i]);
    }
    if (cleanLen == 0) {
        free(clean);
        char* res = malloc(1);
        res[0] = '\0';
        return res;
    }
    int firstLen = cleanLen % k;
    if (firstLen == 0) firstLen = k;
    char* res = malloc(cleanLen * 2 + 2);
    int pos = 0;
    for (int i = 0; i < firstLen; i++) res[pos++] = clean[i];
    int idx = firstLen;
    while (idx < cleanLen) {
        res[pos++] = '-';
        for (int c = 0; c < k; c++) res[pos++] = clean[idx++];
    }
    res[pos] = '\0';
    free(clean);
    return res;
}

int main() {
    char s1[] = "5F3Z-2e-9-w";
    char s2[] = "2-5g-3-J";
    char* r1 = licenseKeyFormatting(s1, 4);
    char* r2 = licenseKeyFormatting(s2, 2);
    printf("%s\n", r1);
    printf("%s\n", r2);
    free(r1);
    free(r2);
    return 0;
}
