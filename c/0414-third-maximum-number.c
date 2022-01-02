#include <stdio.h>
#include <limits.h>

int thirdMax(int* nums, int numsSize) {
    long first = LONG_MIN, second = LONG_MIN, third = LONG_MIN;
    for (int i = 0; i < numsSize; i++) {
        long x = nums[i];
        if (x == first || x == second || x == third) continue;
        if (x > first) {
            third = second;
            second = first;
            first = x;
        } else if (x > second) {
            third = second;
            second = x;
        } else if (x > third) {
            third = x;
        }
    }
    return third == LONG_MIN ? (int)first : (int)third;
}

int main() {
    int a[] = {3, 2, 1};
    int b[] = {1, 2};
    int c[] = {2, 2, 3, 1};
    printf("%d\n", thirdMax(a, 3));
    printf("%d\n", thirdMax(b, 2));
    printf("%d\n", thirdMax(c, 4));
    return 0;
}
