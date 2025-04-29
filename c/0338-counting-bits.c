#include <stdio.h>
#include <stdlib.h>

int* countBits(int n, int* returnSize) {
    int* dp = malloc(sizeof(int) * (n + 1));
    dp[0] = 0;
    for (int i = 1; i <= n; i++) dp[i] = dp[i >> 1] + (i & 1);
    *returnSize = n + 1;
    return dp;
}

int main() {
    int rs;
    int* res = countBits(5, &rs);
    for (int i = 0; i < rs; i++) printf("%d ", res[i]);
    printf("\n");
    free(res);
    return 0;
}
