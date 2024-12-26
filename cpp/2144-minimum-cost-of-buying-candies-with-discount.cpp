#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution{
public:
    int minimumCost(vector<int>& cost){
        sort(cost.begin(),cost.end(),greater<int>());
        int res=0;
        for(int i=0;i<(int)cost.size();i++){
            if(i%3!=2)res+=cost[i];
        }
        return res;
    }
};
int main(){
    Solution sol;
    vector<int> cost={6,5,7,9,2,2};
    cout<<sol.minimumCost(cost)<<endl;
}
