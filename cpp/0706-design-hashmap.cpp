#include<iostream>
#include<vector>
#include<list>
using namespace std;
class MyHashMap{public:
static const int sz=1000;
vector<list<pair<int,int>>>buckets;
MyHashMap():buckets(sz){}
int hash(int key){return key%sz;}
void put(int key,int value){
auto&b=buckets[hash(key)];
for(auto&p:b)if(p.first==key){p.second=value;return;}
b.push_back({key,value});
}
int get(int key){
auto&b=buckets[hash(key)];
for(auto&p:b)if(p.first==key)return p.second;
return -1;
}
void remove(int key){
auto&b=buckets[hash(key)];
b.remove_if([&](pair<int,int>&p){return p.first==key;});
}
};
int main(){
MyHashMap hm;
hm.put(1,1);
hm.put(2,2);
cout<<hm.get(1)<<endl;
cout<<hm.get(3)<<endl;
hm.put(2,1);
cout<<hm.get(2)<<endl;
hm.remove(2);
cout<<hm.get(2)<<endl;
}
