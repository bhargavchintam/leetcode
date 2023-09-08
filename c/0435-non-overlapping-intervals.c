#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

static int cmp(const void* a, const void* b) {
    int* p = *(int**)a;
    int* q = *(int**)b;
    return p[1] - q[1];
}

int eraseOverlapIntervals(int** intervals, int intervalsSize, int* intervalsColSize) {
    qsort(intervals, intervalsSize, sizeof(int*), cmp);
    int count = 0;
    long end = LONG_MIN;
    for (int i = 0; i < intervalsSize; i++) {
        if (intervals[i][0] >= end) {
            end = intervals[i][1];
        } else {
            count++;
        }
    }
    return count;
}

int main() {
    int a[4][2] = {{1, 2}, {2, 3}, {3, 4}, {1, 3}};
    int* rows[4];
    for (int i = 0; i < 4; i++) rows[i] = a[i];
    int colSize = 2;
    printf("%d\n", eraseOverlapIntervals(rows, 4, &colSize));
    return 0;
}
