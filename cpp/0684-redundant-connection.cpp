#include<iostream>
#include<vector>
using namespace std;
class Solution{public:
vector<int>par;
int find(int x){return par[x]==x?x:par[x]=find(par[x]);}
vector<int> findRedundantConnection(vector<vector<int>>&edges){
int n=edges.size();
par.resize(n+1);
for(int i=0;i<=n;i++)par[i]=i;
for(auto&e:edges){
int a=find(e[0]),b=find(e[1]);
if(a==b)return e;
par[a]=b;
}
return {};
}
};
int main(){
Solution sol;
vector<vector<int>>edges={{1,2},{1,3},{2,3}};
auto res=sol.findRedundantConnection(edges);
cout<<res[0]<<" "<<res[1]<<endl;
}
