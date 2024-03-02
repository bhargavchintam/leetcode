#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution{
public:
    int numberOfArrays(vector<int>& differences,int lower,int upper){
        long long cur=0,mn=0,mx=0;
        for(int d:differences){
            cur+=d;
            mn=min(mn,cur);
            mx=max(mx,cur);
        }
        long long room=(long long)(upper-lower)-(mx-mn);
        return room<0?0:(int)(room+1);
    }
};
int main(){
    Solution sol;
    vector<int> differences={1,-3,4};
    cout<<sol.numberOfArrays(differences,1,6)<<endl;
}
