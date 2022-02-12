#include <stdio.h>
#include <stdlib.h>

static int cmp(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int findRadius(int* houses, int housesSize, int* heaters, int heatersSize) {
    qsort(houses, housesSize, sizeof(int), cmp);
    qsort(heaters, heatersSize, sizeof(int), cmp);
    int radius = 0;
    for (int i = 0; i < housesSize; i++) {
        int lo = 0, hi = heatersSize - 1;
        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;
            if (heaters[mid] < houses[i]) lo = mid + 1;
            else hi = mid;
        }
        int dist = abs(heaters[lo] - houses[i]);
        if (lo > 0) {
            int prev = abs(heaters[lo - 1] - houses[i]);
            if (prev < dist) dist = prev;
        }
        if (dist > radius) radius = dist;
    }
    return radius;
}

int main() {
    int h1[] = {1, 2, 3};
    int he1[] = {2};
    printf("%d\n", findRadius(h1, 3, he1, 1));
    int h2[] = {1, 2, 3, 4};
    int he2[] = {1, 4};
    printf("%d\n", findRadius(h2, 4, he2, 2));
    return 0;
}
