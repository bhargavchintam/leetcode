#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* alphabetBoardPath(char* target) {
    int n = strlen(target);
    char* res = malloc(n * 6 + 1);
    int k = 0;
    int cx = 0, cy = 0;
    for (int i = 0; i < n; i++) {
        int c = target[i] - 'a';
        int tx = c / 5, ty = c % 5;
        while (cx > tx) {
            res[k++] = 'U';
            cx--;
        }
        while (cy > ty) {
            res[k++] = 'L';
            cy--;
        }
        while (cx < tx) {
            res[k++] = 'D';
            cx++;
        }
        while (cy < ty) {
            res[k++] = 'R';
            cy++;
        }
        res[k++] = '!';
    }
    res[k] = '\0';
    return res;
}

int main() {
    char* res = alphabetBoardPath("leet");
    printf("%s\n", res);
    free(res);
    return 0;
}
