#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<iostream>
using namespace std;

class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_map<int,int> mp;
        for (int x : unordered_set<int>(nums1.begin(), nums1.end())) mp[x]++;
        for (int x : unordered_set<int>(nums2.begin(), nums2.end())) mp[x]++;
        for (int x : unordered_set<int>(nums3.begin(), nums3.end())) mp[x]++;
        vector<int> res;
        for (auto& p : mp) if (p.second >= 2) res.push_back(p.first);
        return res;
    }
};

int main() {
    vector<int> a = {1,1,3,2}, b = {2,3}, c = {3};
    Solution sol;
    vector<int> res = sol.twoOutOfThree(a, b, c);
    for (int x : res) cout << x << " ";
    cout << endl;
}
