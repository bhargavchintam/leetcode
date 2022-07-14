#include <iostream>
#include <vector>
using namespace std;
class Solution{
public:
    int findPeakElement(vector<int>& nums){
        int lo=0,hi=nums.size()-1;
        while(lo<hi){
            int mid=(lo+hi)/2;
            if(nums[mid]>nums[mid+1])hi=mid;
            else lo=mid+1;
        }
        return lo;
    }
};
int main(){
    vector<int> nums={1,2,3,1};
    Solution sol;
    cout<<sol.findPeakElement(nums)<<endl;
}
