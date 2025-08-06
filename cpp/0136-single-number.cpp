#include <iostream>
#include <vector>
using namespace std;
class Solution{
public:
    int singleNumber(vector<int>& nums){
        int res=0;
        for(int x:nums)res^=x;
        return res;
    }
};
int main(){
    vector<int> nums={4,1,2,1,2};
    Solution sol;
    cout<<sol.singleNumber(nums)<<endl;
}
