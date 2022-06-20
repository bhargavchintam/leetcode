#include <stdio.h>

int getSum(int a, int b) {
    while (b != 0) {
        unsigned int carry = (unsigned int)a & (unsigned int)b;
        a = a ^ b;
        b = (int)(carry << 1);
    }
    return a;
}

int main() {
    printf("%d\n", getSum(1, 2));
    printf("%d\n", getSum(2, 3));
    printf("%d\n", getSum(-2, 3));
    return 0;
}
