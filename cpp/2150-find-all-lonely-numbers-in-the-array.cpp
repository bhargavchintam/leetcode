#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution{
public:
    vector<int> findLonely(vector<int>& nums){
        unordered_map<int,int> mp;
        for(int x:nums)mp[x]++;
        vector<int> res;
        for(int x:nums){
            if(mp[x]==1&&!mp.count(x-1)&&!mp.count(x+1))res.push_back(x);
        }
        return res;
    }
};
int main(){
    Solution sol;
    vector<int> nums={10,6,5,8};
    vector<int> res=sol.findLonely(nums);
    for(int x:res)cout<<x<<" ";
    cout<<endl;
}
