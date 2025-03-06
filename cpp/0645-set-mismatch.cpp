#include<iostream>
#include<vector>
using namespace std;
class Solution{public:
vector<int> findErrorNums(vector<int>&nums){
int n=nums.size();
vector<int>cnt(n+1,0);
for(int x:nums)cnt[x]++;
int dup=-1,miss=-1;
for(int i=1;i<=n;i++){
if(cnt[i]==2)dup=i;
if(cnt[i]==0)miss=i;
}
return {dup,miss};
}
};
int main(){
Solution sol;
vector<int>nums={1,2,2,4};
auto res=sol.findErrorNums(nums);
cout<<res[0]<<" "<<res[1]<<endl;
}
