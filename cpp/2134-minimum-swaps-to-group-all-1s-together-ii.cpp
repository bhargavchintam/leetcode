#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution{
public:
    int minSwaps(vector<int>& nums){
        int n=nums.size();
        int k=0;
        for(int x:nums)k+=x;
        if(k==0)return 0;
        int cur=0;
        for(int i=0;i<k;i++)cur+=nums[i];
        int mx=cur;
        for(int i=1;i<n;i++){
            cur+=nums[(i+k-1)%n]-nums[i-1];
            mx=max(mx,cur);
        }
        return k-mx;
    }
};
int main(){
    Solution sol;
    vector<int> nums={0,1,0,1,1,0,0};
    cout<<sol.minSwaps(nums)<<endl;
}
