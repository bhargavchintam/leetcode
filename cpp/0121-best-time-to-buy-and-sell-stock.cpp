#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
class Solution{
public:
    int maxProfit(vector<int>& prices){
        int minp=INT_MAX,res=0;
        for(int p:prices){
            minp=min(minp,p);
            res=max(res,p-minp);
        }
        return res;
    }
};
int main(){
    vector<int> prices={7,1,5,3,6,4};
    Solution sol;
    cout<<sol.maxProfit(prices)<<endl;
}
