#include <iostream>
#include <vector>
using namespace std;
class Solution{
public:
    bool threeConsecutiveOdds(vector<int>& arr){
        int cnt=0;
        for(int x:arr){
            if(x%2!=0)cnt++;
            else cnt=0;
            if(cnt==3)return true;
        }
        return false;
    }
};
int main(){
    vector<int> a={2,6,4,1};
    vector<int> b={1,2,34,3,4,5,7,23,12};
    Solution s;
    cout<<(s.threeConsecutiveOdds(a)?"true":"false")<<endl;
    cout<<(s.threeConsecutiveOdds(b)?"true":"false")<<endl;
}
