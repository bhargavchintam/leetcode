#include<iostream>
#include<vector>
using namespace std;
class Solution{public:
int pivotIndex(vector<int>&nums){
int total=0;
for(int x:nums)total+=x;
int leftSum=0;
for(int i=0;i<(int)nums.size();i++){
if(leftSum==total-leftSum-nums[i])return i;
leftSum+=nums[i];
}
return -1;
}
};
int main(){
Solution sol;
vector<int>nums={1,7,3,6,5,6};
cout<<sol.pivotIndex(nums)<<endl;
}
