#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

class Solution {
public:
    int gcd(int a, int b){
        return b==0 ? a : gcd(b, a%b);
    }
    int findGCD(vector<int>& nums) {
        int mx = *max_element(nums.begin(), nums.end());
        int mn = *min_element(nums.begin(), nums.end());
        return gcd(mx, mn);
    }
};

int main(){
    vector<int> nums = {2,5,6,9,10};
    Solution sol;
    cout << sol.findGCD(nums) << endl;
}
