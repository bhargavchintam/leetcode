#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> vals;
        for (auto& row : grid) for (int v : row) vals.push_back(v);
        int rem = vals[0] % x;
        for (int v : vals) if (v % x != rem) return -1;
        sort(vals.begin(), vals.end());
        int mid = vals[vals.size() / 2];
        int ops = 0;
        for (int v : vals) ops += abs(v - mid) / x;
        return ops;
    }
};

int main() {
    vector<vector<int>> grid = {{2,4},{6,8}};
    Solution sol;
    cout << sol.minOperations(grid, 2) << endl;
}
