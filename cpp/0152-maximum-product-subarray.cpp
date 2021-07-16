#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution{
public:
    int maxProduct(vector<int>& nums){
        int res=nums[0],curmax=nums[0],curmin=nums[0];
        for(int i=1;i<nums.size();i++){
            int x=nums[i];
            if(x<0)swap(curmax,curmin);
            curmax=max(x,curmax*x);
            curmin=min(x,curmin*x);
            res=max(res,curmax);
        }
        return res;
    }
};
int main(){
    vector<int> nums={2,3,-2,4};
    Solution sol;
    cout<<sol.maxProduct(nums)<<endl;
}
