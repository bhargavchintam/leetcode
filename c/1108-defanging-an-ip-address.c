#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* defangIPaddr(char* address) {
    int n = strlen(address);
    char* res = malloc(n * 3 + 1);
    int k = 0;
    for (int i = 0; i < n; i++) {
        if (address[i] == '.') {
            res[k++] = '[';
            res[k++] = '.';
            res[k++] = ']';
        } else {
            res[k++] = address[i];
        }
    }
    res[k] = '\0';
    return res;
}

int main() {
    char* res = defangIPaddr("1.1.1.1");
    printf("%s\n", res);
    free(res);
    return 0;
}
