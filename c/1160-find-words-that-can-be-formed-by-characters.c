#include <stdio.h>
#include <string.h>

int countCharacters(char** words, int wordsSize, char* chars) {
    int base[26] = {0};
    for (int i = 0; chars[i]; i++) base[chars[i] - 'a']++;
    int total = 0;
    for (int i = 0; i < wordsSize; i++) {
        int cnt[26] = {0};
        int len = strlen(words[i]);
        int ok = 1;
        for (int j = 0; j < len; j++) {
            cnt[words[i][j] - 'a']++;
            if (cnt[words[i][j] - 'a'] > base[words[i][j] - 'a']) {
                ok = 0;
                break;
            }
        }
        if (ok) total += len;
    }
    return total;
}

int main() {
    char* words[] = {"cat", "bt", "hat", "tree"};
    printf("%d\n", countCharacters(words, 4, "atach"));
    return 0;
}
