#include <stdio.h>

int arrangeCoins(int n) {
    long lo = 1, hi = n, ans = 0;
    while (lo <= hi) {
        long mid = lo + (hi - lo) / 2;
        long sum = mid * (mid + 1) / 2;
        if (sum <= n) {
            ans = mid;
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }
    return (int)ans;
}

int main() {
    printf("%d\n", arrangeCoins(5));
    printf("%d\n", arrangeCoins(8));
    return 0;
}
