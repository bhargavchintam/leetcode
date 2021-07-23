#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution{
public:
    bool canBeEqual(vector<int>& target,vector<int>& arr){
        sort(target.begin(),target.end());
        sort(arr.begin(),arr.end());
        return target==arr;
    }
};
int main(){
    vector<int> t={1,2,3,4},a={2,4,1,3};
    Solution s;
    cout<<(s.canBeEqual(t,a)?"true":"false")<<endl;
}
