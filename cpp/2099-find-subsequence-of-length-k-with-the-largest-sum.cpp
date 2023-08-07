#include<vector>
#include<algorithm>
#include<numeric>
#include<iostream>
using namespace std;
class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> idx(n);
        iota(idx.begin(), idx.end(), 0);
        sort(idx.begin(), idx.end(), [&](int a, int b) { return nums[a] > nums[b]; });
        vector<int> chosen(idx.begin(), idx.begin() + k);
        sort(chosen.begin(), chosen.end());
        vector<int> res;
        for (int i : chosen) res.push_back(nums[i]);
        return res;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {2, 1, 3, 3};
    vector<int> res = sol.maxSubsequence(nums, 2);
    for (int x : res) cout << x << " ";
    cout << endl;
}
