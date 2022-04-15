#include<vector>
#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int res = INT_MAX;
        for(int i=0;i+k-1<(int)nums.size();i++){
            res = min(res, nums[i+k-1]-nums[i]);
        }
        return res;
    }
};

int main(){
    vector<int> nums = {9,4,1,7};
    Solution sol;
    cout << sol.minimumDifference(nums, 2) << endl;
}
