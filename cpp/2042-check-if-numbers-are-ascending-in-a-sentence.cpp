#include<string>
#include<sstream>
#include<iostream>
using namespace std;

class Solution {
public:
    bool areNumbersAscending(string s) {
        stringstream ss(s);
        string tok;
        long long prev = -1;
        while (ss >> tok) {
            if (isdigit(tok[0])) {
                long long v = stoll(tok);
                if (v <= prev) return false;
                prev = v;
            }
        }
        return true;
    }
};

int main() {
    Solution sol;
    cout << boolalpha << sol.areNumbersAscending("1 box has 3 blue 4 red 6 green and 12 yellow marbles") << endl;
}
