#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;
class Solution{
public:
    int longestConsecutive(vector<int>& nums){
        unordered_set<int> st(nums.begin(),nums.end());
        int res=0;
        for(int x:st){
            if(st.count(x-1))continue;
            int len=1;
            while(st.count(x+len))len++;
            res=max(res,len);
        }
        return res;
    }
};
int main(){
    vector<int> nums={100,4,200,1,3,2};
    Solution sol;
    cout<<sol.longestConsecutive(nums)<<endl;
}
