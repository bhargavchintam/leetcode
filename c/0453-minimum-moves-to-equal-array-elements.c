#include <stdio.h>

int minMoves(int* nums, int numsSize) {
    int minVal = nums[0];
    long sum = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] < minVal) minVal = nums[i];
        sum += nums[i];
    }
    return (int)(sum - (long)minVal * numsSize);
}

int main() {
    int a[] = {1, 2, 3};
    printf("%d\n", minMoves(a, 3));
    return 0;
}
