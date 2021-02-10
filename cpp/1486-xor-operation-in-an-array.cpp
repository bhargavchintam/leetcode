#include <iostream>
using namespace std;
class Solution{
public:
    int xorOperation(int n,int start){
        int res=0;
        for(int i=0;i<n;i++)res^=(start+2*i);
        return res;
    }
};
int main(){
    Solution s;
    cout<<s.xorOperation(5,0)<<endl;
}
