#include <stdio.h>

int movesToMakeZigzag(int* nums, int numsSize) {
    int moves[2] = {0, 0};
    for (int parity = 0; parity < 2; parity++) {
        int total = 0;
        for (int i = parity; i < numsSize; i += 2) {
            int left = i > 0 ? nums[i - 1] : 1000000;
            int right = i < numsSize - 1 ? nums[i + 1] : 1000000;
            int mn = left < right ? left : right;
            if (nums[i] >= mn) total += nums[i] - mn + 1;
        }
        moves[parity] = total;
    }
    return moves[0] < moves[1] ? moves[0] : moves[1];
}

int main() {
    int nums[] = {1, 2, 3};
    printf("%d\n", movesToMakeZigzag(nums, 3));
    return 0;
}
