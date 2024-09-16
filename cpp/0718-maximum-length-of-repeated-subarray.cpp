#include<iostream>
#include<vector>
using namespace std;
class Solution{public:
int findLength(vector<int>&a,vector<int>&b){
int n=a.size(),m=b.size();
vector<vector<int>>dp(n+1,vector<int>(m+1,0));
int res=0;
for(int i=n-1;i>=0;i--){
for(int j=m-1;j>=0;j--){
if(a[i]==b[j]){
dp[i][j]=dp[i+1][j+1]+1;
res=max(res,dp[i][j]);
}
}
}
return res;
}
};
int main(){
Solution sol;
vector<int>a={1,2,3,2,1};
vector<int>b={3,2,1,4,7};
cout<<sol.findLength(a,b)<<endl;
}
