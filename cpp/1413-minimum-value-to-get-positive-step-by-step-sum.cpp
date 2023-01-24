#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution{
public:
    int minStartValue(vector<int>& nums){
        int sum=0,mn=0;
        for(int x:nums){
            sum+=x;
            mn=min(mn,sum);
        }
        return 1-mn;
    }
};
int main(){
    vector<int> a={-3,2,-3,4,2};
    Solution s;
    cout<<s.minStartValue(a)<<endl;
}
