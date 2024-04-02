#include <stdio.h>

char* dayOfTheWeek(int day, int month, int year) {
    static char* names[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    int y = year;
    if (month < 3) y -= 1;
    int w = (y + y / 4 - y / 100 + y / 400 + t[month - 1] + day) % 7;
    return names[w];
}

int main() {
    printf("%s\n", dayOfTheWeek(31, 8, 2019));
    return 0;
}
