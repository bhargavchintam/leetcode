#include<iostream>
#include<vector>
using namespace std;
class Solution{public:
int findNumberOfLIS(vector<int>&nums){
int n=nums.size();
vector<int>len(n,1),cnt(n,1);
int maxLen=1;
for(int i=0;i<n;i++){
for(int j=0;j<i;j++){
if(nums[j]<nums[i]){
if(len[j]+1>len[i]){len[i]=len[j]+1;cnt[i]=cnt[j];}
else if(len[j]+1==len[i])cnt[i]+=cnt[j];
}
}
maxLen=max(maxLen,len[i]);
}
int res=0;
for(int i=0;i<n;i++)if(len[i]==maxLen)res+=cnt[i];
return res;
}
};
int main(){
Solution sol;
vector<int>nums={1,3,5,4,7};
cout<<sol.findNumberOfLIS(nums)<<endl;
}
