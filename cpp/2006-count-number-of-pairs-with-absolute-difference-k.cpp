#include<vector>
#include<unordered_map>
#include<iostream>
using namespace std;

class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        unordered_map<int,int> cnt;
        int res = 0;
        for(int x : nums){
            res += cnt[x-k] + cnt[x+k];
            cnt[x]++;
        }
        return res;
    }
};

int main(){
    vector<int> nums = {1,2,2,1};
    Solution sol;
    cout << sol.countKDifference(nums, 1) << endl;
}
