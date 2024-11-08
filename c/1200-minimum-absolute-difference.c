#include <stdio.h>
#include <stdlib.h>

int cmp(const void* a, const void* b) {
    return *(int*) a - *(int*) b;
}

int** minimumAbsDifference(int* arr, int arrSize, int* returnSize, int** returnColumnSizes) {
    qsort(arr, arrSize, sizeof(int), cmp);
    int mn = 1000000000;
    for (int i = 1; i < arrSize; i++) {
        int diff = arr[i] - arr[i - 1];
        if (diff < mn) mn = diff;
    }
    int** res = malloc(arrSize * sizeof(int*));
    int* colSizes = malloc(arrSize * sizeof(int));
    int k = 0;
    for (int i = 1; i < arrSize; i++) {
        if (arr[i] - arr[i - 1] == mn) {
            res[k] = malloc(2 * sizeof(int));
            res[k][0] = arr[i - 1];
            res[k][1] = arr[i];
            colSizes[k] = 2;
            k++;
        }
    }
    *returnSize = k;
    *returnColumnSizes = colSizes;
    return res;
}

int main() {
    int arr[] = {4, 2, 1, 3};
    int rs;
    int* colSizes;
    int** res = minimumAbsDifference(arr, 4, &rs, &colSizes);
    for (int i = 0; i < rs; i++) printf("[%d,%d] ", res[i][0], res[i][1]);
    printf("\n");
    for (int i = 0; i < rs; i++) free(res[i]);
    free(res);
    free(colSizes);
    return 0;
}
