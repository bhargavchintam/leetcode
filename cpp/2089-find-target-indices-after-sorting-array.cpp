#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<int> res;
        for (int i = 0; i < (int)nums.size(); i++) if (nums[i] == target) res.push_back(i);
        return res;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {1, 2, 5, 2, 3};
    vector<int> res = sol.targetIndices(nums, 2);
    for (int x : res) cout << x << " ";
    cout << endl;
}
