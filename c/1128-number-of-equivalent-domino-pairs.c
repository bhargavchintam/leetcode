#include <stdio.h>

int numEquivDominoPairs(int** dominoes, int dominoesSize, int* dominoesColSize) {
    int cnt[100] = {0};
    int res = 0;
    for (int i = 0; i < dominoesSize; i++) {
        int a = dominoes[i][0], b = dominoes[i][1];
        int code = a < b ? a * 10 + b : b * 10 + a;
        res += cnt[code];
        cnt[code]++;
    }
    return res;
}

int main() {
    int d1[] = {1, 2};
    int d2[] = {2, 1};
    int d3[] = {3, 4};
    int d4[] = {5, 6};
    int* dominoes[] = {d1, d2, d3, d4};
    int colSizes[] = {2, 2, 2, 2};
    printf("%d\n", numEquivDominoPairs(dominoes, 4, colSizes));
    return 0;
}
