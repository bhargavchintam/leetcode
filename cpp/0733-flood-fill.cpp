#include<iostream>
#include<vector>
using namespace std;
class Solution{public:
void dfs(vector<vector<int>>&image,int i,int j,int oldColor,int newColor){
if(i<0||i>=(int)image.size()||j<0||j>=(int)image[0].size()||image[i][j]!=oldColor||image[i][j]==newColor)return;
image[i][j]=newColor;
dfs(image,i+1,j,oldColor,newColor);
dfs(image,i-1,j,oldColor,newColor);
dfs(image,i,j+1,oldColor,newColor);
dfs(image,i,j-1,oldColor,newColor);
}
vector<vector<int>> floodFill(vector<vector<int>>&image,int sr,int sc,int color){
int old=image[sr][sc];
if(old==color)return image;
dfs(image,sr,sc,old,color);
return image;
}
};
int main(){
Solution sol;
vector<vector<int>>image={{1,1,1},{1,1,0},{1,0,1}};
auto res=sol.floodFill(image,1,1,2);
for(auto&row:res){for(int x:row)cout<<x<<" ";cout<<endl;}
}
