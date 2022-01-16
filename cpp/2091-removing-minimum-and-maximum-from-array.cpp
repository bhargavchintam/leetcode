#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int mini = 0, maxi = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] < nums[mini]) mini = i;
            if (nums[i] > nums[maxi]) maxi = i;
        }
        int lo = min(mini, maxi), hi = max(mini, maxi);
        int opt1 = hi + 1;
        int opt2 = n - lo;
        int opt3 = lo + 1 + n - hi;
        return min({opt1, opt2, opt3});
    }
};
int main() {
    Solution sol;
    vector<int> nums = {2, 10, 7, 5, 4, 1, 8, 6};
    cout << sol.minimumDeletions(nums) << endl;
}
