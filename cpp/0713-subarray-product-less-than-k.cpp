#include<iostream>
#include<vector>
using namespace std;
class Solution{public:
int numSubarrayProductLessThanK(vector<int>&nums,int k){
if(k<=1)return 0;
int prod=1,res=0,left=0;
for(int right=0;right<(int)nums.size();right++){
prod*=nums[right];
while(prod>=k){prod/=nums[left];left++;}
res+=right-left+1;
}
return res;
}
};
int main(){
Solution sol;
vector<int>nums={10,5,2,6};
cout<<sol.numSubarrayProductLessThanK(nums,100)<<endl;
}
