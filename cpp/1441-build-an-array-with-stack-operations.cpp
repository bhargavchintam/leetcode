#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution{
public:
    vector<string> buildArray(vector<int>& target,int n){
        vector<string> res;
        int cur=1;
        for(int x:target){
            while(cur<x){
                res.push_back("Push");
                res.push_back("Pop");
                cur++;
            }
            res.push_back("Push");
            cur++;
        }
        return res;
    }
};
int main(){
    vector<int> t={1,3};
    Solution s;
    auto r=s.buildArray(t,3);
    for(auto&x:r)cout<<x<<" ";
    cout<<endl;
}
