#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution{
public:
    vector<bool> kidsWithCandies(vector<int>& candies,int extraCandies){
        int mx=0;
        for(int x:candies)mx=max(mx,x);
        vector<bool> res;
        for(int x:candies)res.push_back(x+extraCandies>=mx);
        return res;
    }
};
int main(){
    vector<int> c={2,3,5,1,3};
    Solution s;
    auto r=s.kidsWithCandies(c,3);
    for(bool b:r)cout<<(b?"true":"false")<<" ";
    cout<<endl;
}
