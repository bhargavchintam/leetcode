#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<set>
#include<algorithm>
using namespace std;
class Solution{public:
vector<int>par;
int find(int x){return par[x]==x?x:par[x]=find(par[x]);}
vector<vector<string>> accountsMerge(vector<vector<string>>&accounts){
int n=accounts.size();
par.resize(n);
for(int i=0;i<n;i++)par[i]=i;
unordered_map<string,int>owner;
for(int i=0;i<n;i++){
for(int j=1;j<(int)accounts[i].size();j++){
string email=accounts[i][j];
if(owner.count(email)){
int a=find(i),b=find(owner[email]);
if(a!=b)par[a]=b;
}else owner[email]=i;
}
}
unordered_map<int,set<string>>groups;
for(auto&kv:owner)groups[find(kv.second)].insert(kv.first);
vector<vector<string>>res;
for(auto&kv:groups){
vector<string>entry;
entry.push_back(accounts[kv.first][0]);
for(auto&e:kv.second)entry.push_back(e);
res.push_back(entry);
}
return res;
}
};
int main(){
Solution sol;
vector<vector<string>>accounts={
{"John","johnsmith@mail.com","john_newyork@mail.com"},
{"John","johnsmith@mail.com","john00@mail.com"},
{"Mary","mary@mail.com"},
{"John","johnnybravo@mail.com"}
};
auto res=sol.accountsMerge(accounts);
cout<<res.size()<<endl;
for(auto&acc:res){
if(find(acc.begin(),acc.end(),"johnsmith@mail.com")!=acc.end())cout<<acc.size()<<endl;
}
}
