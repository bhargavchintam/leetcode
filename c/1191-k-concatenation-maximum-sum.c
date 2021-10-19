#include <stdio.h>
#include <stdlib.h>

long kadane(int* arr, int n) {
    long best = arr[0], cur = arr[0];
    for (int i = 1; i < n; i++) {
        cur = cur + arr[i] > arr[i] ? cur + arr[i] : arr[i];
        if (cur > best) best = cur;
    }
    return best;
}

int kConcatenationMaxSum(int* arr, int arrSize, int k) {
    long mod = 1000000007;
    long total = 0;
    for (int i = 0; i < arrSize; i++) total += arr[i];
    long once = kadane(arr, arrSize);
    if (k == 1) {
        long res = once < 0 ? 0 : once;
        return (int) (res % mod);
    }
    int* two = malloc(arrSize * 2 * sizeof(int));
    for (int i = 0; i < arrSize; i++) {
        two[i] = arr[i];
        two[i + arrSize] = arr[i];
    }
    long twice = kadane(two, arrSize * 2);
    free(two);
    long res = twice;
    if (total > 0) res = twice + (long) (k - 2) * total;
    if (res < 0) res = 0;
    return (int) (res % mod);
}

int main() {
    int arr[] = {1, 2};
    printf("%d\n", kConcatenationMaxSum(arr, 2, 3));
    return 0;
}
