#include<iostream>
#include<vector>
using namespace std;
class Solution{public:
int dfs(vector<vector<int>>&grid,int i,int j){
if(i<0||i>=(int)grid.size()||j<0||j>=(int)grid[0].size()||grid[i][j]==0)return 0;
grid[i][j]=0;
return 1+dfs(grid,i+1,j)+dfs(grid,i-1,j)+dfs(grid,i,j+1)+dfs(grid,i,j-1);
}
int maxAreaOfIsland(vector<vector<int>>&grid){
int res=0;
for(int i=0;i<(int)grid.size();i++)
for(int j=0;j<(int)grid[0].size();j++)
res=max(res,dfs(grid,i,j));
return res;
}
};
int main(){
Solution sol;
vector<vector<int>>grid={{0,0,1,0},{1,1,1,0},{0,1,0,0}};
cout<<sol.maxAreaOfIsland(grid)<<endl;
}
