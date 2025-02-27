#include <stdio.h>
#include <string.h>

int isValidSerialization(char* preorder) {
    char buf[10000];
    strcpy(buf, preorder);
    int slots = 1;
    char* tok = strtok(buf, ",");
    while (tok) {
        if (slots == 0) return 0;
        if (strcmp(tok, "#") == 0) slots--;
        else slots++;
        tok = strtok(NULL, ",");
    }
    return slots == 0;
}

int main() {
    char a[] = "9,3,4,#,#,1,#,#,2,#,6,#,#";
    char b[] = "1,#";
    printf("%d\n", isValidSerialization(a));
    printf("%d\n", isValidSerialization(b));
    return 0;
}
