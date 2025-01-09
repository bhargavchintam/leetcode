#include<vector>
#include<string>
#include<algorithm>
#include<iostream>
using namespace std;
class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for (auto& w : words) {
            string r = w;
            reverse(r.begin(), r.end());
            if (r == w) return w;
        }
        return "";
    }
};
int main() {
    Solution sol;
    vector<string> words = {"abc", "car", "ada", "racecar", "cool"};
    cout << sol.firstPalindrome(words) << endl;
}
