#include<string>
#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    int countPoints(string rings) {
        vector<int> mask(10, 0);
        for (int i = 0; i < (int)rings.size(); i += 2) {
            char c = rings[i];
            int rod = rings[i + 1] - '0';
            int bit = c == 'R' ? 1 : (c == 'G' ? 2 : 4);
            mask[rod] |= bit;
        }
        int cnt = 0;
        for (int i = 0; i < 10; i++) if (mask[i] == 7) cnt++;
        return cnt;
    }
};
int main() {
    Solution sol;
    string rings = "B0B6G0R6R0R6G9";
    cout << sol.countPoints(rings) << endl;
}
