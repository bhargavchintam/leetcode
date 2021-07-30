#include <stdio.h>

int isPrime(int x) {
    if (x < 2) return 0;
    for (int i = 2; i * i <= x; i++) if (x % i == 0) return 0;
    return 1;
}

int numPrimeArrangements(int n) {
    int p = 0;
    for (int i = 2; i <= n; i++) if (isPrime(i)) p++;
    long mod = 1000000007;
    long res = 1;
    for (int i = 2; i <= p; i++) res = res * i % mod;
    for (int i = 2; i <= n - p; i++) res = res * i % mod;
    return (int) res;
}

int main() {
    printf("%d\n", numPrimeArrangements(5));
    return 0;
}
