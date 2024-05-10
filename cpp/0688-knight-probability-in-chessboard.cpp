#include<iostream>
#include<vector>
using namespace std;
class Solution{public:
double knightProbability(int n,int k,int row,int column){
vector<vector<int>>dirs={{1,2},{1,-2},{-1,2},{-1,-2},{2,1},{2,-1},{-2,1},{-2,-1}};
vector<vector<double>>dp(n,vector<double>(n,0));
dp[row][column]=1;
for(int step=0;step<k;step++){
vector<vector<double>>nd(n,vector<double>(n,0));
for(int i=0;i<n;i++)for(int j=0;j<n;j++){
if(dp[i][j]==0)continue;
for(auto&d:dirs){
int ni=i+d[0],nj=j+d[1];
if(ni>=0&&ni<n&&nj>=0&&nj<n)nd[ni][nj]+=dp[i][j]/8.0;
}
}
dp=nd;
}
double res=0;
for(int i=0;i<n;i++)for(int j=0;j<n;j++)res+=dp[i][j];
return res;
}
};
int main(){
Solution sol;
cout<<sol.knightProbability(3,2,0,0)<<endl;
}
