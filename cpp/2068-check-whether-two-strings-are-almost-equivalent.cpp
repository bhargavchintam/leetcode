#include<string>
#include<vector>
#include<cmath>
#include<iostream>
using namespace std;
class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        vector<int> cnt(26, 0);
        for (char c : word1) cnt[c - 'a']++;
        for (char c : word2) cnt[c - 'a']--;
        for (int x : cnt) if (abs(x) > 3) return false;
        return true;
    }
};
int main() {
    Solution sol;
    string word1 = "aaaa", word2 = "bccb";
    cout << (sol.checkAlmostEquivalent(word1, word2) ? "true" : "false") << endl;
}
