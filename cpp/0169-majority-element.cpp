#include <iostream>
#include <vector>
using namespace std;
class Solution{
public:
    int majorityElement(vector<int>& nums){
        int cnt=0,cand=0;
        for(int x:nums){
            if(cnt==0)cand=x;
            cnt+=(x==cand)?1:-1;
        }
        return cand;
    }
};
int main(){
    vector<int> nums={2,2,1,1,1,2,2};
    Solution sol;
    cout<<sol.majorityElement(nums)<<endl;
}
