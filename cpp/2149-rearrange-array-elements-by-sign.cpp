#include <iostream>
#include <vector>
using namespace std;
class Solution{
public:
    vector<int> rearrangeArray(vector<int>& nums){
        int n=nums.size();
        vector<int> res(n);
        int pi=0,ni=1;
        for(int x:nums){
            if(x>0){
                res[pi]=x;
                pi+=2;
            }else{
                res[ni]=x;
                ni+=2;
            }
        }
        return res;
    }
};
int main(){
    Solution sol;
    vector<int> nums={3,1,-2,-5,2,-4};
    vector<int> res=sol.rearrangeArray(nums);
    for(int x:res)cout<<x<<" ";
    cout<<endl;
}
