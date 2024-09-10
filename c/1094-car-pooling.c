#include <stdio.h>
#include <stdbool.h>

bool carPooling(int** trips, int tripsSize, int* tripsColSize, int capacity) {
    int diff[1001] = {0};
    for (int i = 0; i < tripsSize; i++) {
        int num = trips[i][0], from = trips[i][1], to = trips[i][2];
        diff[from] += num;
        diff[to] -= num;
    }
    int cur = 0;
    for (int i = 0; i <= 1000; i++) {
        cur += diff[i];
        if (cur > capacity) return false;
    }
    return true;
}

int main() {
    int t1[] = {2, 1, 5};
    int t2[] = {3, 3, 7};
    int* trips[] = {t1, t2};
    int colSizes[] = {3, 3};
    printf("%d\n", carPooling(trips, 2, colSizes, 4));
    printf("%d\n", carPooling(trips, 2, colSizes, 5));
    return 0;
}
