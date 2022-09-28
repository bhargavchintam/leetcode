#include <stdio.h>

int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int best = 0, cur = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == 1) {
            cur++;
            if (cur > best) best = cur;
        } else {
            cur = 0;
        }
    }
    return best;
}

int main() {
    int a[] = {1, 1, 0, 1, 1, 1};
    printf("%d\n", findMaxConsecutiveOnes(a, 6));
    return 0;
}
