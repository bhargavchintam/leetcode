#include <stdio.h>
#include <stdlib.h>

int combinationSum4(int* nums, int numsSize, int target) {
    unsigned int* dp = calloc(target + 1, sizeof(unsigned int));
    dp[0] = 1;
    for (int i = 1; i <= target; i++) {
        for (int j = 0; j < numsSize; j++) {
            if (nums[j] <= i) dp[i] += dp[i - nums[j]];
        }
    }
    int ans = (int)dp[target];
    free(dp);
    return ans;
}

int main() {
    int nums[] = {1, 2, 3};
    printf("%d\n", combinationSum4(nums, 3, 4));
    return 0;
}
