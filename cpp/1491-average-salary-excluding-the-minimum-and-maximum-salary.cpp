#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution{
public:
    double average(vector<int>& salary){
        int mn=salary[0],mx=salary[0],sum=0;
        for(int x:salary){
            mn=min(mn,x);
            mx=max(mx,x);
            sum+=x;
        }
        return (double)(sum-mn-mx)/(salary.size()-2);
    }
};
int main(){
    vector<int> s2={4000,3000,1000,2000};
    Solution s;
    cout<<s.average(s2)<<endl;
}
