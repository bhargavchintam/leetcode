#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool canConstruct(char* ransomNote, char* magazine) {
    int cnt[26] = {0};
    for (int i = 0; magazine[i]; i++) cnt[magazine[i] - 'a']++;
    for (int i = 0; ransomNote[i]; i++) {
        cnt[ransomNote[i] - 'a']--;
        if (cnt[ransomNote[i] - 'a'] < 0) return false;
    }
    return true;
}

int main() {
    printf("%d\n", canConstruct("a", "b"));
    printf("%d\n", canConstruct("aa", "aab"));
    return 0;
}
