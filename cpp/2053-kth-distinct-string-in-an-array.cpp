#include<vector>
#include<string>
#include<unordered_map>
#include<iostream>
using namespace std;

class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> cnt;
        for (auto& s : arr) cnt[s]++;
        for (auto& s : arr) {
            if (cnt[s] == 1) {
                k--;
                if (k == 0) return s;
            }
        }
        return "";
    }
};

int main() {
    vector<string> arr = {"d","b","c","b","c","a"};
    Solution sol;
    cout << sol.kthDistinct(arr, 2) << endl;
}
