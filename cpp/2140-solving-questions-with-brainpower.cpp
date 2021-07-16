#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution{
public:
    long long mostPoints(vector<vector<int>>& questions){
        int n=questions.size();
        vector<long long> dp(n+1,0);
        for(int i=n-1;i>=0;i--){
            long long points=questions[i][0];
            int skip=questions[i][1];
            long long take=points+(i+skip+1<n?dp[i+skip+1]:0);
            dp[i]=max(dp[i+1],take);
        }
        return dp[0];
    }
};
int main(){
    Solution sol;
    vector<vector<int>> questions={{3,2},{4,3},{4,4},{2,5}};
    cout<<sol.mostPoints(questions)<<endl;
}
