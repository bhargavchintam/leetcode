#include<vector>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;

class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        sort(nums.begin(), nums.end(), [](const string &a, const string &b){
            if(a.size() != b.size()) return a.size() > b.size();
            return a > b;
        });
        return nums[k-1];
    }
};

int main(){
    vector<string> nums = {"3","6","7","10"};
    Solution sol;
    cout << sol.kthLargestNumber(nums, 4) << endl;
}
