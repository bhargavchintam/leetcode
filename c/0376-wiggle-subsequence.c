#include <stdio.h>

int wiggleMaxLength(int* nums, int numsSize) {
    if (numsSize < 2) return numsSize;
    int up = 1, down = 1;
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] > nums[i - 1]) up = down + 1;
        else if (nums[i] < nums[i - 1]) down = up + 1;
    }
    return up > down ? up : down;
}

int main() {
    int a[] = {1, 7, 4, 9, 2, 5};
    int b[] = {1, 17, 5, 10, 13, 15, 10, 5, 16, 8};
    int c[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("%d\n", wiggleMaxLength(a, 6));
    printf("%d\n", wiggleMaxLength(b, 10));
    printf("%d\n", wiggleMaxLength(c, 9));
    return 0;
}
