#include <stdio.h>

int hammingDistance(int x, int y) {
    unsigned int v = (unsigned int)(x ^ y);
    int cnt = 0;
    while (v) {
        cnt += v & 1;
        v >>= 1;
    }
    return cnt;
}

int main() {
    printf("%d\n", hammingDistance(1, 4));
    printf("%d\n", hammingDistance(3, 1));
    return 0;
}
