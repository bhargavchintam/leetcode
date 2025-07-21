#include <stdio.h>

int distanceBetweenBusStops(int* distance, int distanceSize, int start, int destination) {
    int a = start < destination ? start : destination;
    int b = start < destination ? destination : start;
    int d1 = 0, total = 0;
    for (int i = 0; i < distanceSize; i++) {
        total += distance[i];
        if (i >= a && i < b) d1 += distance[i];
    }
    int d2 = total - d1;
    return d1 < d2 ? d1 : d2;
}

int main() {
    int distance[] = {1, 2, 3, 4};
    printf("%d\n", distanceBetweenBusStops(distance, 4, 0, 1));
    return 0;
}
