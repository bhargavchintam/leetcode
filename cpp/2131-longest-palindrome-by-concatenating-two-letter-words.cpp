#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;
class Solution{
public:
    int longestPalindrome(vector<string>& words){
        unordered_map<string,int> mp;
        for(auto&w:words)mp[w]++;
        int res=0;
        bool mid=false;
        for(auto&p:mp){
            string w=p.first;
            string rev=w;
            reverse(rev.begin(),rev.end());
            if(w[0]==w[1]){
                res+=(p.second/2)*4;
                if(p.second%2)mid=true;
            }else if(w<rev){
                res+=min(p.second,mp.count(rev)?mp[rev]:0)*4;
            }
        }
        if(mid)res+=2;
        return res;
    }
};
int main(){
    Solution sol;
    vector<string> words={"lc","cl","gg"};
    cout<<sol.longestPalindrome(words)<<endl;
}
