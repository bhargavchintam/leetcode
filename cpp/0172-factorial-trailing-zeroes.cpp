#include <iostream>
using namespace std;
class Solution{
public:
    int trailingZeroes(int n){
        int res=0;
        while(n){
            n/=5;
            res+=n;
        }
        return res;
    }
};
int main(){
    Solution sol;
    cout<<sol.trailingZeroes(5)<<endl;
}
