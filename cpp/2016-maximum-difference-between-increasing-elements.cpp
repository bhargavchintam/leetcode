#include<vector>
#include<iostream>
#include<climits>
using namespace std;

class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n = nums.size();
        int mn = nums[0];
        int ans = -1;
        for (int i = 1; i < n; i++) {
            if (nums[i] > mn) ans = max(ans, nums[i] - mn);
            else mn = nums[i];
        }
        return ans;
    }
};

int main() {
    vector<int> nums = {7,1,5,4};
    Solution sol;
    cout << sol.maximumDifference(nums) << endl;
}
