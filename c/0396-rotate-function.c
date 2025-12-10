#include <stdio.h>

int maxRotateFunction(int* nums, int numsSize) {
    long sum = 0, f = 0;
    for (int i = 0; i < numsSize; i++) {
        sum += nums[i];
        f += (long)i * nums[i];
    }
    long maxF = f;
    for (int k = 1; k < numsSize; k++) {
        f = f + sum - (long)numsSize * nums[numsSize - k];
        if (f > maxF) maxF = f;
    }
    return (int)maxF;
}

int main() {
    int a[] = {4, 3, 2, 6};
    printf("%d\n", maxRotateFunction(a, 4));
    return 0;
}
