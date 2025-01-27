#include <stdio.h>
#include <stdlib.h>

static int max2(int a, int b) { return a > b ? a : b; }

int integerBreak(int n) {
    int* dp = calloc(n + 1, sizeof(int));
    dp[1] = 1;
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            int prod = max2(j * (i - j), j * dp[i - j]);
            dp[i] = max2(dp[i], prod);
        }
    }
    int ans = dp[n];
    free(dp);
    return ans;
}

int main() {
    printf("%d\n", integerBreak(2));
    printf("%d\n", integerBreak(10));
    return 0;
}
