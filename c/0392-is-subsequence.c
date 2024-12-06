#include <stdio.h>
#include <stdbool.h>

bool isSubsequence(char* s, char* t) {
    int i = 0, j = 0;
    while (s[i] && t[j]) {
        if (s[i] == t[j]) i++;
        j++;
    }
    return s[i] == '\0';
}

int main() {
    printf("%d\n", isSubsequence("abc", "ahbgdc"));
    printf("%d\n", isSubsequence("axc", "ahbgdc"));
    return 0;
}
