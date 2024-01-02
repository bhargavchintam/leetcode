#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

class Solution {
public:
    int sumOfBeauties(vector<int>& nums) {
        int n = nums.size();
        vector<int> suffixMin(n);
        suffixMin[n-1] = nums[n-1];
        for(int i=n-2;i>=0;i--) suffixMin[i] = min(suffixMin[i+1], nums[i]);
        int res = 0;
        int prefixMax = nums[0];
        for(int i=1;i<n-1;i++){
            if(prefixMax < nums[i] && nums[i] < suffixMin[i+1]) res += 2;
            else if(nums[i-1] < nums[i] && nums[i] < nums[i+1]) res += 1;
            prefixMax = max(prefixMax, nums[i]);
        }
        return res;
    }
};

int main(){
    vector<int> nums = {1,2,3};
    Solution sol;
    cout << sol.sumOfBeauties(nums) << endl;
}
