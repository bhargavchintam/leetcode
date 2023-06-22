#include <stdio.h>
#include <string.h>

int backtrack(int* cnt) {
    int total = 0;
    for (int i = 0; i < 26; i++) {
        if (cnt[i] > 0) {
            cnt[i]--;
            total += 1 + backtrack(cnt);
            cnt[i]++;
        }
    }
    return total;
}

int numTilePossibilities(char* tiles) {
    int cnt[26] = {0};
    for (int i = 0; tiles[i]; i++) cnt[tiles[i] - 'A']++;
    return backtrack(cnt);
}

int main() {
    printf("%d\n", numTilePossibilities("AAB"));
    return 0;
}
