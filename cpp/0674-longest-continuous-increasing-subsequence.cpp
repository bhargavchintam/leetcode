#include<iostream>
#include<vector>
using namespace std;
class Solution{public:
int findLengthOfLCIS(vector<int>&nums){
if(nums.empty())return 0;
int res=1,cur=1;
for(int i=1;i<(int)nums.size();i++){
if(nums[i]>nums[i-1])cur++;
else cur=1;
res=max(res,cur);
}
return res;
}
};
int main(){
Solution sol;
vector<int>nums={1,3,5,4,7};
cout<<sol.findLengthOfLCIS(nums)<<endl;
}
