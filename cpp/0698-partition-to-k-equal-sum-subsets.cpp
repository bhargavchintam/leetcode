#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution{public:
bool backtrack(vector<int>&nums,vector<int>&buckets,int idx,int target){
if(idx==(int)nums.size())return true;
for(int i=0;i<(int)buckets.size();i++){
if(buckets[i]+nums[idx]<=target){
buckets[i]+=nums[idx];
if(backtrack(nums,buckets,idx+1,target))return true;
buckets[i]-=nums[idx];
}
if(buckets[i]==0)break;
}
return false;
}
bool canPartitionKSubsets(vector<int>&nums,int k){
int sum=0;
for(int x:nums)sum+=x;
if(sum%k)return false;
int target=sum/k;
sort(nums.rbegin(),nums.rend());
if(nums[0]>target)return false;
vector<int>buckets(k,0);
return backtrack(nums,buckets,0,target);
}
};
int main(){
Solution sol;
vector<int>nums={4,3,2,3,5,2,1};
cout<<boolalpha<<sol.canPartitionKSubsets(nums,4)<<endl;
}
