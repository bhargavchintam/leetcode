#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution{
public:
    int numIdenticalPairs(vector<int>& nums){
        unordered_map<int,int> mp;
        int res=0;
        for(int x:nums){
            res+=mp[x];
            mp[x]++;
        }
        return res;
    }
};
int main(){
    vector<int> n={1,2,3,1,1,3};
    Solution s;
    cout<<s.numIdenticalPairs(n)<<endl;
}
