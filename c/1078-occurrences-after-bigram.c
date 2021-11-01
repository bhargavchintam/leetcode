#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* dupstr(const char* s) {
    char* r = malloc(strlen(s) + 1);
    strcpy(r, s);
    return r;
}

char** findOcurrences(char* text, char* first, char* second, int* returnSize) {
    int cap = 100;
    char** words = malloc(cap * sizeof(char*));
    int wc = 0;
    char* copy = dupstr(text);
    char* tok = strtok(copy, " ");
    while (tok) {
        if (wc >= cap) {
            cap *= 2;
            words = realloc(words, cap * sizeof(char*));
        }
        words[wc++] = dupstr(tok);
        tok = strtok(NULL, " ");
    }
    free(copy);
    char** res = malloc((wc + 1) * sizeof(char*));
    int rc = 0;
    for (int i = 0; i + 2 < wc; i++) {
        if (strcmp(words[i], first) == 0 && strcmp(words[i + 1], second) == 0) {
            res[rc++] = dupstr(words[i + 2]);
        }
    }
    for (int i = 0; i < wc; i++) free(words[i]);
    free(words);
    *returnSize = rc;
    return res;
}

int main() {
    int rs;
    char** res = findOcurrences("alice is a good girl she is a good girl", "a", "good", &rs);
    for (int i = 0; i < rs; i++) printf("%s ", res[i]);
    printf("\n");
    for (int i = 0; i < rs; i++) free(res[i]);
    free(res);
    return 0;
}
