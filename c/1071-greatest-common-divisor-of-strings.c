#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int gcdlen(int a, int b) {
    while (b) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

char* gcdOfStrings(char* str1, char* str2) {
    int n1 = strlen(str1), n2 = strlen(str2);
    char* cat1 = malloc(n1 + n2 + 1);
    char* cat2 = malloc(n1 + n2 + 1);
    strcpy(cat1, str1);
    strcat(cat1, str2);
    strcpy(cat2, str2);
    strcat(cat2, str1);
    if (strcmp(cat1, cat2) != 0) {
        free(cat1);
        free(cat2);
        char* res = malloc(1);
        res[0] = '\0';
        return res;
    }
    free(cat1);
    free(cat2);
    int g = gcdlen(n1, n2);
    char* res = malloc(g + 1);
    strncpy(res, str1, g);
    res[g] = '\0';
    return res;
}

int main() {
    char* res = gcdOfStrings("ABCABC", "ABC");
    printf("%s\n", res);
    free(res);
    return 0;
}
