#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution{public:
int findShortestSubArray(vector<int>&nums){
unordered_map<int,int>first,cnt;
int degree=0,res=0;
for(int i=0;i<(int)nums.size();i++){
int x=nums[i];
if(!first.count(x))first[x]=i;
cnt[x]++;
if(cnt[x]>degree){degree=cnt[x];res=i-first[x]+1;}
else if(cnt[x]==degree)res=min(res,i-first[x]+1);
}
return res;
}
};
int main(){
Solution sol;
vector<int>nums={1,2,2,3,1};
cout<<sol.findShortestSubArray(nums)<<endl;
}
