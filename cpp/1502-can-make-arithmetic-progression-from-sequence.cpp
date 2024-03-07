#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution{
public:
    bool canMakeArithmeticProgression(vector<int>& arr){
        sort(arr.begin(),arr.end());
        for(int i=2;i<(int)arr.size();i++)
            if(arr[i]-arr[i-1]!=arr[1]-arr[0])return false;
        return true;
    }
};
int main(){
    vector<int> a={3,5,1};
    Solution s;
    cout<<(s.canMakeArithmeticProgression(a)?"true":"false")<<endl;
}
