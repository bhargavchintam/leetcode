#include<vector>
#include<iostream>
#include<climits>
using namespace std;

class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        int n = grid[0].size();
        long long top = 0;
        for (int i = 0; i < n; i++) top += grid[0][i];
        long long bottom = 0;
        long long ans = LLONG_MAX;
        for (int i = 0; i < n; i++) {
            top -= grid[0][i];
            long long cur = max(top, bottom);
            ans = min(ans, cur);
            bottom += grid[1][i];
        }
        return ans;
    }
};

int main() {
    vector<vector<int>> grid = {{2,5,4},{1,5,1}};
    Solution sol;
    cout << sol.gridGame(grid) << endl;
}
