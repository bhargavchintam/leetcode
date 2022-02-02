#include <stdio.h>
#include <stdlib.h>

int* findDuplicates(int* nums, int numsSize, int* returnSize) {
    int* res = malloc(sizeof(int) * numsSize);
    int k = 0;
    for (int i = 0; i < numsSize; i++) {
        int idx = abs(nums[i]) - 1;
        if (nums[idx] < 0) {
            res[k++] = idx + 1;
        } else {
            nums[idx] = -nums[idx];
        }
    }
    *returnSize = k;
    return res;
}

int main() {
    int a[] = {4, 3, 2, 7, 8, 2, 3, 1};
    int rs;
    int* res = findDuplicates(a, 8, &rs);
    for (int i = 0; i < rs; i++) printf("%d ", res[i]);
    printf("\n");
    free(res);
    return 0;
}
