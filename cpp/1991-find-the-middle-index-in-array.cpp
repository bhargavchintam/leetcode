#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int total = 0;
        for(int x : nums) total += x;
        int leftSum = 0;
        for(int i=0;i<(int)nums.size();i++){
            if(leftSum == total - leftSum - nums[i]) return i;
            leftSum += nums[i];
        }
        return -1;
    }
};

int main(){
    vector<int> nums = {2,3,-1,8,4};
    Solution sol;
    cout << sol.findMiddleIndex(nums) << endl;
}
