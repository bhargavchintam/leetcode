#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* toHex(int num) {
    if (num == 0) {
        char* res = malloc(2);
        strcpy(res, "0");
        return res;
    }
    unsigned int u = (unsigned int)num;
    char buf[9];
    buf[8] = '\0';
    int idx = 8;
    while (u > 0) {
        int digit = u & 0xf;
        buf[--idx] = digit < 10 ? '0' + digit : 'a' + digit - 10;
        u >>= 4;
    }
    char* res = malloc(strlen(buf + idx) + 1);
    strcpy(res, buf + idx);
    return res;
}

int main() {
    char* a = toHex(26);
    char* b = toHex(-1);
    printf("%s\n", a);
    printf("%s\n", b);
    free(a);
    free(b);
    return 0;
}
