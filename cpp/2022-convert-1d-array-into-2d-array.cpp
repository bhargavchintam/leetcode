#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> res;
        if ((long long)m * n != (long long)original.size()) return res;
        res.resize(m, vector<int>(n));
        for (int i = 0; i < (int)original.size(); i++) {
            res[i / n][i % n] = original[i];
        }
        return res;
    }
};

int main() {
    vector<int> original = {1,2,3,4};
    Solution sol;
    vector<vector<int>> res = sol.construct2DArray(original, 2, 2);
    for (auto& row : res) {
        cout << "[";
        for (int i = 0; i < (int)row.size(); i++) cout << row[i] << (i + 1 < (int)row.size() ? "," : "");
        cout << "]";
    }
    cout << endl;
}
