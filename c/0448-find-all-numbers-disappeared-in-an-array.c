#include <stdio.h>
#include <stdlib.h>

int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    for (int i = 0; i < numsSize; i++) {
        int idx = abs(nums[i]) - 1;
        if (nums[idx] > 0) nums[idx] = -nums[idx];
    }
    int* res = malloc(sizeof(int) * numsSize);
    int k = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > 0) res[k++] = i + 1;
    }
    *returnSize = k;
    return res;
}

int main() {
    int a[] = {4, 3, 2, 7, 8, 2, 3, 1};
    int rs;
    int* res = findDisappearedNumbers(a, 8, &rs);
    for (int i = 0; i < rs; i++) printf("%d ", res[i]);
    printf("\n");
    free(res);
    return 0;
}
