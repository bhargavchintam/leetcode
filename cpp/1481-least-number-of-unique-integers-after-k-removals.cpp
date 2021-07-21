#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
class Solution{
public:
    int findLeastNumOfUniqueInts(vector<int>& arr,int k){
        unordered_map<int,int> mp;
        for(int x:arr)mp[x]++;
        vector<int> freq;
        for(auto&p:mp)freq.push_back(p.second);
        sort(freq.begin(),freq.end());
        int cnt=freq.size();
        for(int f:freq){
            if(k>=f){k-=f;cnt--;}
            else break;
        }
        return cnt;
    }
};
int main(){
    vector<int> a={4,3,1,1,3,3,2};
    Solution s;
    cout<<s.findLeastNumOfUniqueInts(a,3)<<endl;
}
