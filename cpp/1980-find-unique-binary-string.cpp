#include<vector>
#include<string>
#include<iostream>
using namespace std;

class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string res;
        for(int i=0;i<(int)nums.size();i++){
            res += (nums[i][i]=='0') ? '1' : '0';
        }
        return res;
    }
};

int main(){
    vector<string> nums = {"01","10"};
    Solution sol;
    cout << sol.findDifferentBinaryString(nums) << endl;
}
