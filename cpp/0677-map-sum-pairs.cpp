#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
class MapSum{public:
unordered_map<string,int>mp;
MapSum(){}
void insert(string key,int val){
mp[key]=val;
}
int sum(string prefix){
int res=0;
for(auto&kv:mp){
if(kv.first.substr(0,prefix.size())==prefix)res+=kv.second;
}
return res;
}
};
int main(){
MapSum ms;
ms.insert("apple",3);
cout<<ms.sum("ap")<<endl;
ms.insert("app",2);
cout<<ms.sum("ap")<<endl;
}
