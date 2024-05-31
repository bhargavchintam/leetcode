#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution{
public:
    vector<int> mostVisited(int n,vector<int>& rounds){
        vector<int> cnt(n+1,0);
        for(int i=1;i<(int)rounds.size();i++){
            int cur=rounds[i-1];
            while(cur!=rounds[i]){
                cnt[cur]++;
                cur=cur%n+1;
            }
        }
        cnt[rounds.back()]++;
        int mx=0;
        for(int i=1;i<=n;i++)mx=max(mx,cnt[i]);
        vector<int> res;
        for(int i=1;i<=n;i++)if(cnt[i]==mx)res.push_back(i);
        return res;
    }
};
int main(){
    vector<int> r={1,3,1,2};
    Solution s;
    auto res=s.mostVisited(4,r);
    for(int x:res)cout<<x<<" ";
    cout<<endl;
}
