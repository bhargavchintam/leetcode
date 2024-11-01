#include <stdio.h>

void duplicateZeros(int* arr, int arrSize) {
    for (int i = 0; i < arrSize; i++) {
        if (arr[i] == 0) {
            for (int j = arrSize - 1; j > i; j--) arr[j] = arr[j - 1];
            i++;
        }
    }
}

int main() {
    int arr[] = {1, 0, 2, 3, 0, 4, 5, 0};
    int n = 8;
    duplicateZeros(arr, n);
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
