#include<vector>
#include<unordered_map>
#include<algorithm>
#include<iostream>
using namespace std;
class RangeFreqQuery {
public:
    unordered_map<int, vector<int>> mp;
    RangeFreqQuery(vector<int>& arr) {
        for (int i = 0; i < (int)arr.size(); i++) mp[arr[i]].push_back(i);
    }
    int query(int left, int right, int value) {
        auto& v = mp[value];
        auto lo = lower_bound(v.begin(), v.end(), left);
        auto hi = upper_bound(v.begin(), v.end(), right);
        return hi - lo;
    }
};
int main() {
    vector<int> arr = {12, 33, 4, 56, 22, 2, 34, 33, 22, 12, 34, 56};
    RangeFreqQuery obj(arr);
    cout << obj.query(1, 2, 4) << " " << obj.query(0, 11, 33) << endl;
}
