#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;
class LRUCache{
public:
    int cap;
    list<pair<int,int>> dl;
    unordered_map<int,list<pair<int,int>>::iterator> mp;
    LRUCache(int capacity){cap=capacity;}
    int get(int key){
        if(!mp.count(key))return -1;
        auto it=mp[key];
        int val=it->second;
        dl.erase(it);
        dl.push_front({key,val});
        mp[key]=dl.begin();
        return val;
    }
    void put(int key,int value){
        if(mp.count(key)){
            dl.erase(mp[key]);
        }else if(dl.size()==cap){
            auto last=dl.back();
            mp.erase(last.first);
            dl.pop_back();
        }
        dl.push_front({key,value});
        mp[key]=dl.begin();
    }
};
int main(){
    LRUCache cache(2);
    cache.put(1,1);
    cache.put(2,2);
    cout<<cache.get(1)<<" ";
    cache.put(3,3);
    cout<<cache.get(2)<<" ";
    cache.put(4,4);
    cout<<cache.get(1)<<" ";
    cout<<cache.get(3)<<" ";
    cout<<cache.get(4)<<endl;
}
