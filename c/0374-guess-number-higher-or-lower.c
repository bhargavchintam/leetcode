#include <stdio.h>

static int pick;

int guess(int num) {
    if (num > pick) return -1;
    if (num < pick) return 1;
    return 0;
}

int guessNumber(int n) {
    int lo = 1, hi = n;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        int r = guess(mid);
        if (r == 0) return mid;
        else if (r < 0) hi = mid - 1;
        else lo = mid + 1;
    }
    return -1;
}

int main() {
    pick = 6;
    printf("%d\n", guessNumber(10));
    pick = 1;
    printf("%d\n", guessNumber(1));
    return 0;
}
