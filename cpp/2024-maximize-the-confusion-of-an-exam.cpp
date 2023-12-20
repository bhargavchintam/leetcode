#include<string>
#include<iostream>
#include<algorithm>
using namespace std;

class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        return max(helper(answerKey, k, 'T'), helper(answerKey, k, 'F'));
    }

    int helper(string& s, int k, char c) {
        int n = s.size();
        int l = 0, cnt = 0, ans = 0;
        for (int r = 0; r < n; r++) {
            if (s[r] != c) cnt++;
            while (cnt > k) {
                if (s[l] != c) cnt--;
                l++;
            }
            ans = max(ans, r - l + 1);
        }
        return ans;
    }
};

int main() {
    Solution sol;
    cout << sol.maxConsecutiveAnswers("TTFF", 2) << endl;
}
