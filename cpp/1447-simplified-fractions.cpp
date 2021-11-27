#include <iostream>
#include <vector>
#include <string>
#include <numeric>
using namespace std;
class Solution{
public:
    vector<string> simplifiedFractions(int n){
        vector<string> res;
        for(int b=2;b<=n;b++)
            for(int a=1;a<b;a++)
                if(gcd(a,b)==1)res.push_back(to_string(a)+"/"+to_string(b));
        return res;
    }
};
int main(){
    Solution s;
    auto r=s.simplifiedFractions(2);
    for(auto&x:r)cout<<x<<" ";
    cout<<endl;
}
