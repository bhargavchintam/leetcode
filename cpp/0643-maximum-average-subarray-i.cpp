#include<iostream>
#include<vector>
using namespace std;
class Solution{public:
double findMaxAverage(vector<int>&nums,int k){
long long sum=0;
for(int i=0;i<k;i++)sum+=nums[i];
long long mx=sum;
for(int i=k;i<(int)nums.size();i++){
sum+=nums[i]-nums[i-k];
mx=max(mx,sum);
}
return (double)mx/k;
}
};
int main(){
Solution sol;
vector<int>nums={1,12,-5,-6,50,3};
cout<<sol.findMaxAverage(nums,4)<<endl;
}
