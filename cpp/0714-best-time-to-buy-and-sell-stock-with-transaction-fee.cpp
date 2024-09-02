#include<iostream>
#include<vector>
using namespace std;
class Solution{public:
int maxProfit(vector<int>&prices,int fee){
int cash=0,hold=-prices[0];
for(int i=1;i<(int)prices.size();i++){
cash=max(cash,hold+prices[i]-fee);
hold=max(hold,cash-prices[i]);
}
return cash;
}
};
int main(){
Solution sol;
vector<int>prices={1,3,2,8,4,9};
cout<<sol.maxProfit(prices,2)<<endl;
}
