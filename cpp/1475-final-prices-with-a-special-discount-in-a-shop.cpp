#include <iostream>
#include <vector>
using namespace std;
class Solution{
public:
    vector<int> finalPrices(vector<int>& prices){
        int n=prices.size();
        vector<int> res=prices;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(prices[j]<=prices[i]){
                    res[i]=prices[i]-prices[j];
                    break;
                }
            }
        }
        return res;
    }
};
int main(){
    vector<int> p={8,4,6,2,3};
    Solution s;
    auto r=s.finalPrices(p);
    for(int x:r)cout<<x<<" ";
    cout<<endl;
}
