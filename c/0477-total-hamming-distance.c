#include <stdio.h>

int totalHammingDistance(int* nums, int numsSize) {
    long total = 0;
    for (int bit = 0; bit < 32; bit++) {
        int ones = 0;
        for (int i = 0; i < numsSize; i++) {
            if (nums[i] & (1 << bit)) ones++;
        }
        total += (long)ones * (numsSize - ones);
    }
    return (int)total;
}

int main() {
    int a[] = {4, 14, 2};
    printf("%d\n", totalHammingDistance(a, 3));
    return 0;
}
