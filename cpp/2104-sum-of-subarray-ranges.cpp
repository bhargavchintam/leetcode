#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();
        long long res = 0;
        for (int i = 0; i < n; i++) {
            int mn = nums[i], mx = nums[i];
            for (int j = i; j < n; j++) {
                mn = min(mn, nums[j]);
                mx = max(mx, nums[j]);
                res += mx - mn;
            }
        }
        return res;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3};
    cout << sol.subArrayRanges(nums) << endl;
}
