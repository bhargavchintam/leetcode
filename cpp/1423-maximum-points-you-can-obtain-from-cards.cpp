#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution{
public:
    int maxScore(vector<int>& cardPoints,int k){
        int n=cardPoints.size();
        int total=0;
        for(int x:cardPoints)total+=x;
        int w=n-k;
        if(w==0)return total;
        int sum=0;
        for(int i=0;i<w;i++)sum+=cardPoints[i];
        int mn=sum;
        for(int i=w;i<n;i++){
            sum+=cardPoints[i]-cardPoints[i-w];
            mn=min(mn,sum);
        }
        return total-mn;
    }
};
int main(){
    vector<int> c={1,2,3,4,5,6,1};
    Solution s;
    cout<<s.maxScore(c,3)<<endl;
}
