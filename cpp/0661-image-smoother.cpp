#include<iostream>
#include<vector>
using namespace std;
class Solution{public:
vector<vector<int>> imageSmoother(vector<vector<int>>&img){
int m=img.size(),n=img[0].size();
vector<vector<int>>res(m,vector<int>(n));
for(int i=0;i<m;i++)for(int j=0;j<n;j++){
int sum=0,cnt=0;
for(int di=-1;di<=1;di++)for(int dj=-1;dj<=1;dj++){
int ni=i+di,nj=j+dj;
if(ni>=0&&ni<m&&nj>=0&&nj<n){sum+=img[ni][nj];cnt++;}
}
res[i][j]=sum/cnt;
}
return res;
}
};
int main(){
Solution sol;
vector<vector<int>>img={{1,1,1},{1,0,1},{1,1,1}};
auto res=sol.imageSmoother(img);
for(auto&row:res){for(int x:row)cout<<x<<" ";cout<<endl;}
}
