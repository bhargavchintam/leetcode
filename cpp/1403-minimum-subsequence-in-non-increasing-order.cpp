#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution{
public:
    vector<int> minSubsequence(vector<int>& nums){
        sort(nums.begin(),nums.end(),greater<int>());
        int total=0;
        for(int x:nums)total+=x;
        vector<int> res;
        int sum=0;
        for(int x:nums){
            sum+=x;
            res.push_back(x);
            if(sum>total-sum)break;
        }
        return res;
    }
};
int main(){
    vector<int> a={4,3,10,9,8};
    Solution s;
    auto r=s.minSubsequence(a);
    for(int x:r)cout<<x<<" ";
    cout<<endl;
}
