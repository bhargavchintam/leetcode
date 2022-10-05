#include<iostream>
#include<vector>
using namespace std;
class Solution{public:
bool checkPossibility(vector<int>&nums){
int cnt=0;
for(int i=1;i<(int)nums.size();i++){
if(nums[i-1]>nums[i]){
cnt++;
if(cnt>1)return false;
if(i-2>=0&&nums[i-2]>nums[i])nums[i]=nums[i-1];
else nums[i-1]=nums[i];
}
}
return true;
}
};
int main(){
Solution sol;
vector<int>a={4,2,3};
vector<int>b={4,2,1};
cout<<boolalpha<<sol.checkPossibility(a)<<endl;
cout<<boolalpha<<sol.checkPossibility(b)<<endl;
}
