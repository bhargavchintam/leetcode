#include <stdio.h>

int dayOfYear(char* date) {
    int y, m, d;
    sscanf(date, "%d-%d-%d", &y, &m, &d);
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int leap = (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
    if (leap) days[1] = 29;
    int total = d;
    for (int i = 0; i < m - 1; i++) total += days[i];
    return total;
}

int main() {
    printf("%d\n", dayOfYear("2019-01-09"));
    return 0;
}
