#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char** fizzBuzz(int n, int* returnSize) {
    char** res = malloc(sizeof(char*) * n);
    for (int i = 1; i <= n; i++) {
        char* buf = malloc(16);
        if (i % 15 == 0) strcpy(buf, "FizzBuzz");
        else if (i % 3 == 0) strcpy(buf, "Fizz");
        else if (i % 5 == 0) strcpy(buf, "Buzz");
        else sprintf(buf, "%d", i);
        res[i - 1] = buf;
    }
    *returnSize = n;
    return res;
}

int main() {
    int rs;
    char** res = fizzBuzz(15, &rs);
    for (int i = 0; i < rs; i++) printf("%s ", res[i]);
    printf("\n");
    for (int i = 0; i < rs; i++) free(res[i]);
    free(res);
    return 0;
}
