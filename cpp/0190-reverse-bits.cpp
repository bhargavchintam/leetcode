#include <iostream>
#include <cstdint>
using namespace std;
class Solution{
public:
    uint32_t reverseBits(uint32_t n){
        uint32_t res=0;
        for(int i=0;i<32;i++){
            res=(res<<1)|(n&1);
            n>>=1;
        }
        return res;
    }
};
int main(){
    Solution sol;
    uint32_t n=43261596;
    cout<<sol.reverseBits(n)<<endl;
}
