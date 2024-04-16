#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        for (int i = 0; i < (int)nums.size(); i++) {
            if (i % 10 == nums[i]) return i;
        }
        return -1;
    }
};

int main() {
    vector<int> nums = {4,3,2,1};
    Solution sol;
    cout << sol.smallestEqual(nums) << endl;
}
