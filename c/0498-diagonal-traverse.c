#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int* findDiagonalOrder(int** mat, int matSize, int* matColSize, int* returnSize) {
    int rows = matSize, cols = matColSize[0];
    int* res = malloc(sizeof(int) * rows * cols);
    int r = 0, c = 0, idx = 0;
    bool up = true;
    while (idx < rows * cols) {
        res[idx++] = mat[r][c];
        if (up) {
            if (c == cols - 1) { r++; up = false; }
            else if (r == 0) { c++; up = false; }
            else { r--; c++; }
        } else {
            if (r == rows - 1) { c++; up = true; }
            else if (c == 0) { r++; up = true; }
            else { r++; c--; }
        }
    }
    *returnSize = rows * cols;
    return res;
}

int main() {
    int m[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int* rows[3];
    int colSizes[3] = {3, 3, 3};
    for (int i = 0; i < 3; i++) rows[i] = m[i];
    int rs;
    int* res = findDiagonalOrder(rows, 3, colSizes, &rs);
    for (int i = 0; i < rs; i++) printf("%d ", res[i]);
    printf("\n");
    free(res);
    return 0;
}
