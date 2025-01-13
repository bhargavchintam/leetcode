#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* addStrings(char* num1, char* num2) {
    int n1 = strlen(num1), n2 = strlen(num2);
    int n = (n1 > n2 ? n1 : n2) + 2;
    char* res = malloc(n);
    int i = n1 - 1, j = n2 - 1, k = 0, carry = 0;
    while (i >= 0 || j >= 0 || carry) {
        int a = i >= 0 ? num1[i--] - '0' : 0;
        int b = j >= 0 ? num2[j--] - '0' : 0;
        int sum = a + b + carry;
        res[k++] = '0' + sum % 10;
        carry = sum / 10;
    }
    res[k] = '\0';
    for (int l = 0, r = k - 1; l < r; l++, r--) {
        char t = res[l];
        res[l] = res[r];
        res[r] = t;
    }
    return res;
}

int main() {
    char* res = addStrings("11", "123");
    printf("%s\n", res);
    free(res);
    return 0;
}
