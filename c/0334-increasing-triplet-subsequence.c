#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

bool increasingTriplet(int* nums, int n) {
    int first = INT_MAX, second = INT_MAX;
    for (int i = 0; i < n; i++) {
        int x = nums[i];
        if (x <= first) first = x;
        else if (x <= second) second = x;
        else return true;
    }
    return false;
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {5, 4, 3, 2, 1};
    printf("%d\n", increasingTriplet(a, 5));
    printf("%d\n", increasingTriplet(b, 5));
    return 0;
}
