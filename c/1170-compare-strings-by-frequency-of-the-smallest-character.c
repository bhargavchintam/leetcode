#include <stdio.h>
#include <stdlib.h>

int freq(char* s) {
    char mn = 'z' + 1;
    int cnt = 0;
    for (int i = 0; s[i]; i++) {
        if (s[i] < mn) {
            mn = s[i];
            cnt = 1;
        } else if (s[i] == mn) {
            cnt++;
        }
    }
    return cnt;
}

int* numSmallerByFrequency(char** queries, int queriesSize, char** words, int wordsSize, int* returnSize) {
    int* wf = malloc(wordsSize * sizeof(int));
    for (int i = 0; i < wordsSize; i++) wf[i] = freq(words[i]);
    int* res = malloc(queriesSize * sizeof(int));
    for (int i = 0; i < queriesSize; i++) {
        int qf = freq(queries[i]);
        int cnt = 0;
        for (int j = 0; j < wordsSize; j++) if (wf[j] > qf) cnt++;
        res[i] = cnt;
    }
    free(wf);
    *returnSize = queriesSize;
    return res;
}

int main() {
    char* queries[] = {"cbd"};
    char* words[] = {"zaaaz"};
    int rs;
    int* res = numSmallerByFrequency(queries, 1, words, 1, &rs);
    for (int i = 0; i < rs; i++) printf("%d ", res[i]);
    printf("\n");
    free(res);
    return 0;
}
