#include<string>
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

class Solution {
public:
    int minTimeToType(string word) {
        int cur = 0, res = 0;
        for(char c : word){
            int d = c - 'a';
            int diff = abs(d - cur);
            res += min(diff, 26 - diff) + 1;
            cur = d;
        }
        return res;
    }
};

int main(){
    Solution sol;
    cout << sol.minTimeToType("abc") << endl;
}
