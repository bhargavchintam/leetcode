#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution{
public:
    int maxSatisfaction(vector<int>& satisfaction){
        sort(satisfaction.begin(),satisfaction.end());
        int n=satisfaction.size();
        int total=0,sum=0;
        for(int i=n-1;i>=0;i--){
            sum+=satisfaction[i];
            if(sum<=0)break;
            total+=sum;
        }
        return total;
    }
};
int main(){
    vector<int> a={-1,-8,0,5,-9};
    Solution s;
    cout<<s.maxSatisfaction(a)<<endl;
}
