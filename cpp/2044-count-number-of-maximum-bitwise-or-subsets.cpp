#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int maxOr = 0;
        for (int x : nums) maxOr |= x;
        int n = nums.size();
        int cnt = 0;
        for (int mask = 1; mask < (1 << n); mask++) {
            int cur = 0;
            for (int i = 0; i < n; i++) if (mask & (1 << i)) cur |= nums[i];
            if (cur == maxOr) cnt++;
        }
        return cnt;
    }
};

int main() {
    vector<int> nums = {3,1};
    Solution sol;
    cout << sol.countMaxOrSubsets(nums) << endl;
    vector<int> nums2 = {2,2,2};
    cout << sol.countMaxOrSubsets(nums2) << endl;
}
