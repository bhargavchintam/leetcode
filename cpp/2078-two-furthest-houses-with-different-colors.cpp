#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int res = 0;
        for (int j = n - 1; j >= 0; j--) {
            if (colors[j] != colors[0]) { res = max(res, j); break; }
        }
        for (int i = 0; i < n; i++) {
            if (colors[i] != colors[n - 1]) { res = max(res, n - 1 - i); break; }
        }
        return res;
    }
};
int main() {
    Solution sol;
    vector<int> colors = {1, 1, 1, 6, 1, 1, 1};
    cout << sol.maxDistance(colors) << endl;
}
