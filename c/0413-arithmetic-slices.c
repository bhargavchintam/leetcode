#include <stdio.h>

int numberOfArithmeticSlices(int* nums, int numsSize) {
    int cur = 0;
    int total = 0;
    for (int i = 2; i < numsSize; i++) {
        if (nums[i] - nums[i - 1] == nums[i - 1] - nums[i - 2]) {
            cur++;
            total += cur;
        } else {
            cur = 0;
        }
    }
    return total;
}

int main() {
    int a[] = {1, 2, 3, 4};
    int b[] = {1, 3, 5, 7, 9};
    printf("%d\n", numberOfArithmeticSlices(a, 4));
    printf("%d\n", numberOfArithmeticSlices(b, 5));
    return 0;
}
