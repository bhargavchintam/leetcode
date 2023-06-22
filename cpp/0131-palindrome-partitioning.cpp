#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution{
public:
    vector<vector<string>> res;
    vector<string> cur;
    bool isPal(string&s,int l,int r){
        while(l<r){if(s[l++]!=s[r--])return false;}
        return true;
    }
    void bt(string&s,int start){
        if(start==s.size()){res.push_back(cur);return;}
        for(int end=start;end<s.size();end++){
            if(isPal(s,start,end)){
                cur.push_back(s.substr(start,end-start+1));
                bt(s,end+1);
                cur.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s){
        bt(s,0);
        return res;
    }
};
int main(){
    Solution sol;
    auto res=sol.partition("aab");
    for(auto&v:res){
        cout<<"[";
        for(int i=0;i<v.size();i++)cout<<v[i]<<(i+1<v.size()?",":"");
        cout<<"]";
    }
    cout<<endl;
}
