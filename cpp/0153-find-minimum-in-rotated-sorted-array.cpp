#include <iostream>
#include <vector>
using namespace std;
class Solution{
public:
    int findMin(vector<int>& nums){
        int lo=0,hi=nums.size()-1;
        while(lo<hi){
            int mid=(lo+hi)/2;
            if(nums[mid]>nums[hi])lo=mid+1;
            else hi=mid;
        }
        return nums[lo];
    }
};
int main(){
    vector<int> nums={3,4,5,1,2};
    Solution sol;
    cout<<sol.findMin(nums)<<endl;
}
