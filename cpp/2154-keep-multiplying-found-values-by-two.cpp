#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
class Solution{
public:
    int findFinalValue(vector<int>& nums,int original){
        unordered_set<int> st(nums.begin(),nums.end());
        while(st.count(original))original*=2;
        return original;
    }
};
int main(){
    Solution sol;
    vector<int> nums={5,3,6,1,12};
    cout<<sol.findFinalValue(nums,3)<<endl;
}
