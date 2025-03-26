#include <stdio.h>
#include <stdlib.h>

int* lexicalOrder(int n, int* returnSize) {
    int* res = malloc(sizeof(int) * n);
    int cur = 1;
    for (int i = 0; i < n; i++) {
        res[i] = cur;
        if (cur * 10 <= n) {
            cur *= 10;
        } else {
            while (cur % 10 == 9 || cur + 1 > n) cur /= 10;
            cur++;
        }
    }
    *returnSize = n;
    return res;
}

int main() {
    int rs;
    int* res = lexicalOrder(13, &rs);
    for (int i = 0; i < rs; i++) printf("%d ", res[i]);
    printf("\n");
    free(res);
    return 0;
}
