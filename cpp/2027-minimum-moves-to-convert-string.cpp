#include<string>
#include<iostream>
using namespace std;

class Solution {
public:
    int minimumMoves(string s) {
        int n = s.size();
        int cnt = 0;
        int i = 0;
        while (i < n) {
            if (s[i] == 'X') {
                cnt++;
                i += 3;
            } else {
                i++;
            }
        }
        return cnt;
    }
};

int main() {
    Solution sol;
    cout << sol.minimumMoves("XXX") << endl;
    cout << sol.minimumMoves("XXOX") << endl;
    cout << sol.minimumMoves("OOOO") << endl;
}
