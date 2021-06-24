#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

class Solution {
public:
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        sort(properties.begin(), properties.end(), [](const vector<int> &a, const vector<int> &b){
            if(a[0] != b[0]) return a[0] > b[0];
            return a[1] < b[1];
        });
        int maxDef = 0, res = 0;
        for(auto &p : properties){
            if(p[1] < maxDef) res++;
            else maxDef = p[1];
        }
        return res;
    }
};

int main(){
    vector<vector<int>> properties = {{5,5},{6,3},{3,6}};
    Solution sol;
    cout << sol.numberOfWeakCharacters(properties) << endl;
}
