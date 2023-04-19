#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        int cnt[10] = {0};
        for (int d : digits) cnt[d]++;
        vector<int> res;
        for (int i = 100; i < 1000; i += 2) {
            int a = i / 100, b = (i / 10) % 10, c = i % 10;
            int need[10] = {0};
            need[a]++; need[b]++; need[c]++;
            bool ok = true;
            for (int k = 0; k < 10; k++) if (need[k] > cnt[k]) ok = false;
            if (ok) res.push_back(i);
        }
        return res;
    }
};
int main() {
    Solution sol;
    vector<int> digits = {2, 1, 3, 0};
    vector<int> res = sol.findEvenNumbers(digits);
    for (int x : res) cout << x << " ";
    cout << endl;
}
