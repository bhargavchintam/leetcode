#include <stdio.h>
#include <stdlib.h>

int* relativeSortArray(int* arr1, int arr1Size, int* arr2, int arr2Size, int* returnSize) {
    int cnt[1001] = {0};
    for (int i = 0; i < arr1Size; i++) cnt[arr1[i]]++;
    int* res = malloc(arr1Size * sizeof(int));
    int k = 0;
    for (int i = 0; i < arr2Size; i++) {
        while (cnt[arr2[i]] > 0) {
            res[k++] = arr2[i];
            cnt[arr2[i]]--;
        }
    }
    for (int v = 0; v <= 1000; v++) {
        while (cnt[v] > 0) {
            res[k++] = v;
            cnt[v]--;
        }
    }
    *returnSize = arr1Size;
    return res;
}

int main() {
    int arr1[] = {2, 3, 1, 3, 2, 4, 6, 7, 9, 2, 19};
    int arr2[] = {2, 1, 4, 3, 9, 6};
    int rs;
    int* res = relativeSortArray(arr1, 11, arr2, 6, &rs);
    for (int i = 0; i < rs; i++) printf("%d ", res[i]);
    printf("\n");
    free(res);
    return 0;
}
