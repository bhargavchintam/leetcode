#include <stdio.h>
#include <stdlib.h>

int* corpFlightBookings(int** bookings, int bookingsSize, int* bookingsColSize, int n, int* returnSize) {
    int* diff = calloc(n + 1, sizeof(int));
    for (int i = 0; i < bookingsSize; i++) {
        int f = bookings[i][0], l = bookings[i][1], s = bookings[i][2];
        diff[f - 1] += s;
        diff[l] -= s;
    }
    int* res = malloc(n * sizeof(int));
    int cur = 0;
    for (int i = 0; i < n; i++) {
        cur += diff[i];
        res[i] = cur;
    }
    free(diff);
    *returnSize = n;
    return res;
}

int main() {
    int b1[] = {1, 2, 10};
    int b2[] = {2, 3, 20};
    int b3[] = {2, 5, 25};
    int* bookings[] = {b1, b2, b3};
    int colSizes[] = {3, 3, 3};
    int rs;
    int* res = corpFlightBookings(bookings, 3, colSizes, 5, &rs);
    for (int i = 0; i < rs; i++) printf("%d ", res[i]);
    printf("\n");
    free(res);
    return 0;
}
