#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long res = 0;
        int n = prices.size(), i = 0;
        while (i < n) {
            int j = i + 1;
            while (j < n && prices[j] == prices[j - 1] - 1) j++;
            long long len = j - i;
            res += len * (len + 1) / 2;
            i = j;
        }
        return res;
    }
};
int main() {
    Solution sol;
    vector<int> prices = {3, 2, 1, 4};
    cout << sol.getDescentPeriods(prices) << endl;
}
