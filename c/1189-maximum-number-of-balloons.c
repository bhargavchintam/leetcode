#include <stdio.h>
#include <string.h>

int maxNumberOfBalloons(char* text) {
    int cnt[26] = {0};
    for (int i = 0; text[i]; i++) cnt[text[i] - 'a']++;
    int b = cnt['b' - 'a'];
    int a = cnt['a' - 'a'];
    int l = cnt['l' - 'a'] / 2;
    int o = cnt['o' - 'a'] / 2;
    int n = cnt['n' - 'a'];
    int res = b;
    if (a < res) res = a;
    if (l < res) res = l;
    if (o < res) res = o;
    if (n < res) res = n;
    return res;
}

int main() {
    printf("%d\n", maxNumberOfBalloons("nlaebolko"));
    return 0;
}
