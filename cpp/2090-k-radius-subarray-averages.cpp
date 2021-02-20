#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> res(n, -1);
        long long size = 2LL * k + 1;
        if (size > n) return res;
        long long window = 0;
        for (int i = 0; i < n; i++) {
            window += nums[i];
            if (i >= size) window -= nums[i - size];
            if (i >= size - 1) res[i - k] = window / size;
        }
        return res;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {7, 4, 3, 9, 1, 8, 5, 2, 6};
    vector<int> res = sol.getAverages(nums, 3);
    for (int x : res) cout << x << " ";
    cout << endl;
}
