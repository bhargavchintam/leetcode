#include <stdio.h>
#include <stdlib.h>

int* distributeCandies(int candies, int num_people, int* returnSize) {
    int* res = calloc(num_people, sizeof(int));
    int give = 1, i = 0;
    while (candies > 0) {
        int amt = give < candies ? give : candies;
        res[i % num_people] += amt;
        candies -= amt;
        give++;
        i++;
    }
    *returnSize = num_people;
    return res;
}

int main() {
    int rs;
    int* res = distributeCandies(7, 4, &rs);
    for (int i = 0; i < rs; i++) printf("%d ", res[i]);
    printf("\n");
    free(res);
    return 0;
}
