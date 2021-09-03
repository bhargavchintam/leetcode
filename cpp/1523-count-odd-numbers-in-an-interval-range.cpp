#include <iostream>
using namespace std;
class Solution{
public:
    int countOdds(int low,int high){
        return (high+1)/2-low/2;
    }
};
int main(){
    Solution s;
    cout<<s.countOdds(3,7)<<endl;
}
