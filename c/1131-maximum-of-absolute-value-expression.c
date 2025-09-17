#include <stdio.h>

int maxAbsValExpr(int* arr1, int arr1Size, int* arr2, int arr2Size) {
    int n = arr1Size;
    int signs[4][2] = {{1, 1}, {1, -1}, {-1, 1}, {-1, -1}};
    int best = 0;
    for (int s = 0; s < 4; s++) {
        int mn = 1000000000, mx = -1000000000;
        for (int i = 0; i < n; i++) {
            int val = signs[s][0] * arr1[i] + signs[s][1] * arr2[i] + i;
            if (val > mx) mx = val;
            if (val < mn) mn = val;
        }
        if (mx - mn > best) best = mx - mn;
    }
    return best;
}

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {-1, 4, 5, 6};
    printf("%d\n", maxAbsValExpr(arr1, 4, arr2, 4));
    return 0;
}
