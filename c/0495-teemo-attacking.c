#include <stdio.h>

int findPoisonedDuration(int* timeSeries, int timeSeriesSize, int duration) {
    if (timeSeriesSize == 0) return 0;
    int total = 0;
    for (int i = 0; i < timeSeriesSize - 1; i++) {
        int gap = timeSeries[i + 1] - timeSeries[i];
        total += gap < duration ? gap : duration;
    }
    total += duration;
    return total;
}

int main() {
    int a[] = {1, 4};
    int b[] = {1, 2};
    printf("%d\n", findPoisonedDuration(a, 2, 2));
    printf("%d\n", findPoisonedDuration(b, 2, 2));
    return 0;
}
