#include<string>
#include<sstream>
#include<iostream>
using namespace std;

class Solution {
public:
    int countValidWords(string sentence) {
        stringstream ss(sentence);
        string tok;
        int cnt = 0;
        while (ss >> tok) {
            if (isValid(tok)) cnt++;
        }
        return cnt;
    }

    bool isValid(string& tok) {
        int n = tok.size();
        int hyphens = 0, puncts = 0;
        for (int i = 0; i < n; i++) {
            char c = tok[i];
            if (isdigit(c)) return false;
            if (c == '-') {
                hyphens++;
                if (hyphens > 1) return false;
                if (i == 0 || i == n - 1) return false;
                if (!islower(tok[i - 1]) || !islower(tok[i + 1])) return false;
            } else if (c == '!' || c == '.' || c == ',') {
                puncts++;
                if (puncts > 1) return false;
                if (i != n - 1) return false;
            } else if (!islower(c)) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    Solution sol;
    cout << sol.countValidWords("cat and  dog") << endl;
    cout << sol.countValidWords("!this  1-s b8d!") << endl;
    cout << sol.countValidWords("alice and  bob are playing stone-game10") << endl;
}
