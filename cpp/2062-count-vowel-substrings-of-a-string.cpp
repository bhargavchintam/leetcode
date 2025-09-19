#include<string>
#include<set>
#include<iostream>
using namespace std;
class Solution {
public:
    int countVowelSubstrings(string word) {
        int n = word.size(), cnt = 0;
        string vowels = "aeiou";
        for (int i = 0; i < n; i++) {
            set<char> seen;
            for (int j = i; j < n; j++) {
                if (vowels.find(word[j]) == string::npos) break;
                seen.insert(word[j]);
                if (seen.size() == 5) cnt++;
            }
        }
        return cnt;
    }
};
int main() {
    Solution sol;
    string word = "aeiouu";
    cout << sol.countVowelSubstrings(word) << endl;
}
