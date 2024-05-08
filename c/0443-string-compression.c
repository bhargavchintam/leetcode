#include <stdio.h>
#include <stdlib.h>

int compress(char* chars, int charsSize) {
    int read = 0, write = 0;
    while (read < charsSize) {
        char c = chars[read];
        int count = 0;
        while (read < charsSize && chars[read] == c) {
            read++;
            count++;
        }
        chars[write++] = c;
        if (count > 1) {
            char buf[12];
            sprintf(buf, "%d", count);
            for (int i = 0; buf[i]; i++) chars[write++] = buf[i];
        }
    }
    return write;
}

int main() {
    char chars[] = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    int len = compress(chars, 7);
    printf("%d\n", len);
    for (int i = 0; i < len; i++) printf("%c", chars[i]);
    printf("\n");
    return 0;
}
