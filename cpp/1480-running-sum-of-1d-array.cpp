#include <iostream>
#include <vector>
using namespace std;
class Solution{
public:
    vector<int> runningSum(vector<int>& nums){
        vector<int> res(nums.size());
        int sum=0;
        for(int i=0;i<(int)nums.size();i++){
            sum+=nums[i];
            res[i]=sum;
        }
        return res;
    }
};
int main(){
    vector<int> n={1,2,3,4};
    Solution s;
    auto r=s.runningSum(n);
    for(int x:r)cout<<x<<" ";
    cout<<endl;
}
