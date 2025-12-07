#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
class Solution{
public:
    int minSubArrayLen(int target, vector<int>& nums){
        int l=0,sum=0,res=INT_MAX;
        for(int r=0;r<nums.size();r++){
            sum+=nums[r];
            while(sum>=target){
                res=min(res,r-l+1);
                sum-=nums[l++];
            }
        }
        return res==INT_MAX?0:res;
    }
};
int main(){
    vector<int> nums={2,3,1,2,4,3};
    Solution sol;
    cout<<sol.minSubArrayLen(7,nums)<<endl;
}
