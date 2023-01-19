#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution{
public:
    int rob(vector<int>& nums){
        int prev=0,cur=0;
        for(int x:nums){
            int tmp=max(cur,prev+x);
            prev=cur;
            cur=tmp;
        }
        return cur;
    }
};
int main(){
    vector<int> nums={1,2,3,1};
    Solution sol;
    cout<<sol.rob(nums)<<endl;
}
