#include<vector>
#include<map>
#include<iostream>
using namespace std;

class Solution {
public:
    int gcd(int a, int b){
        return b==0 ? a : gcd(b, a%b);
    }
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        map<pair<int,int>, long long> mp;
        long long res = 0;
        for(auto &r : rectangles){
            int g = gcd(r[0], r[1]);
            pair<int,int> key = {r[0]/g, r[1]/g};
            res += mp[key];
            mp[key]++;
        }
        return res;
    }
};

int main(){
    vector<vector<int>> rectangles = {{4,8},{3,6},{10,20},{15,30}};
    Solution sol;
    cout << sol.interchangeableRectangles(rectangles) << endl;
}
