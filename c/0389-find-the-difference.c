#include <stdio.h>

char findTheDifference(char* s, char* t) {
    char res = 0;
    for (int i = 0; s[i]; i++) res ^= s[i];
    for (int i = 0; t[i]; i++) res ^= t[i];
    return res;
}

int main() {
    char s[] = "abcd";
    char t[] = "abcde";
    printf("%c\n", findTheDifference(s, t));
    return 0;
}
