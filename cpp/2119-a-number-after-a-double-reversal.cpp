#include <iostream>
using namespace std;
class Solution{
public:
    bool isSameAfterReversals(int num){
        return num==0||num%10!=0;
    }
};
int main(){
    Solution sol;
    cout<<(sol.isSameAfterReversals(526)?"true":"false")<<endl;
}
