#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<algorithm>
using namespace std;
class Solution{public:
vector<string> topKFrequent(vector<string>&words,int k){
unordered_map<string,int>cnt;
for(auto&w:words)cnt[w]++;
vector<string>uniq;
for(auto&kv:cnt)uniq.push_back(kv.first);
sort(uniq.begin(),uniq.end(),[&](const string&a,const string&b){
if(cnt[a]!=cnt[b])return cnt[a]>cnt[b];
return a<b;
});
return vector<string>(uniq.begin(),uniq.begin()+k);
}
};
int main(){
Solution sol;
vector<string>words={"i","love","leetcode","i","love","coding"};
auto res=sol.topKFrequent(words,2);
for(auto&w:res)cout<<w<<" ";
cout<<endl;
}
