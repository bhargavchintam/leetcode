#include<vector>
#include<string>
#include<unordered_map>
#include<iostream>
using namespace std;
class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string, int> m1, m2;
        for (auto& w : words1) m1[w]++;
        for (auto& w : words2) m2[w]++;
        int cnt = 0;
        for (auto& p : m1) {
            if (p.second == 1 && m2.count(p.first) && m2[p.first] == 1) cnt++;
        }
        return cnt;
    }
};
int main() {
    Solution sol;
    vector<string> words1 = {"leetcode", "is", "amazing", "as", "is"};
    vector<string> words2 = {"amazing", "leetcode", "is"};
    cout << sol.countWords(words1, words2) << endl;
}
