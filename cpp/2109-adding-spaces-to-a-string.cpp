#include<string>
#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string res;
        int n = s.size(), m = spaces.size(), j = 0;
        for (int i = 0; i < n; i++) {
            if (j < m && spaces[j] == i) { res += ' '; j++; }
            res += s[i];
        }
        return res;
    }
};
int main() {
    Solution sol;
    string s = "LeetcodeHelpsMeLearn";
    vector<int> spaces = {8, 13, 15};
    cout << sol.addSpaces(s, spaces) << endl;
}
