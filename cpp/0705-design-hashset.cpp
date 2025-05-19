#include<iostream>
#include<vector>
#include<list>
using namespace std;
class MyHashSet{public:
static const int sz=1000;
vector<list<int>>buckets;
MyHashSet():buckets(sz){}
int hash(int key){return key%sz;}
void add(int key){
auto&b=buckets[hash(key)];
for(int x:b)if(x==key)return;
b.push_back(key);
}
void remove(int key){
auto&b=buckets[hash(key)];
b.remove(key);
}
bool contains(int key){
auto&b=buckets[hash(key)];
for(int x:b)if(x==key)return true;
return false;
}
};
int main(){
MyHashSet hs;
hs.add(1);
hs.add(2);
cout<<boolalpha<<hs.contains(1)<<endl;
cout<<boolalpha<<hs.contains(3)<<endl;
hs.add(2);
cout<<boolalpha<<hs.contains(2)<<endl;
hs.remove(2);
cout<<boolalpha<<hs.contains(2)<<endl;
}
