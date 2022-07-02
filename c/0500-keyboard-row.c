#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

static int row[26];

static void initRows() {
    const char* r1 = "qwertyuiop";
    const char* r2 = "asdfghjkl";
    const char* r3 = "zxcvbnm";
    for (int i = 0; r1[i]; i++) row[r1[i] - 'a'] = 0;
    for (int i = 0; r2[i]; i++) row[r2[i] - 'a'] = 1;
    for (int i = 0; r3[i]; i++) row[r3[i] - 'a'] = 2;
}

static int sameRow(char* w) {
    int r = row[tolower(w[0]) - 'a'];
    for (int i = 1; w[i]; i++) {
        if (row[tolower(w[i]) - 'a'] != r) return 0;
    }
    return 1;
}

char** findWords(char** words, int wordsSize, int* returnSize) {
    initRows();
    char** res = malloc(sizeof(char*) * wordsSize);
    int k = 0;
    for (int i = 0; i < wordsSize; i++) {
        if (sameRow(words[i])) res[k++] = words[i];
    }
    *returnSize = k;
    return res;
}

int main() {
    char* words[] = {"Hello", "Alaska", "Dad", "Peace"};
    int rs;
    char** res = findWords(words, 4, &rs);
    for (int i = 0; i < rs; i++) printf("%s ", res[i]);
    printf("\n");
    free(res);
    return 0;
}
