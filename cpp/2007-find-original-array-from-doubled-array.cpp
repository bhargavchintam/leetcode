#include<vector>
#include<map>
#include<iostream>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        int n = changed.size();
        if(n % 2) return {};
        sort(changed.begin(), changed.end());
        map<int,int> cnt;
        for(int x : changed) cnt[x]++;
        vector<int> res;
        for(int x : changed){
            if(cnt[x] == 0) continue;
            cnt[x]--;
            if(x == 0){
                if(cnt[0] == 0) return {};
                cnt[0]--;
                res.push_back(0);
                continue;
            }
            if(cnt[2*x] <= 0) return {};
            cnt[2*x]--;
            res.push_back(x);
        }
        return res;
    }
};

int main(){
    vector<int> changed = {1,3,4,2,6,8};
    Solution sol;
    vector<int> res = sol.findOriginalArray(changed);
    cout << "[";
    for(int i=0;i<(int)res.size();i++){
        cout << res[i];
        if(i+1<(int)res.size()) cout << ",";
    }
    cout << "]" << endl;
}
