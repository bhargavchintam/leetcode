#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution{
public:
    vector<string> divideString(string s,int k,char fill){
        vector<string> res;
        int n=s.size();
        for(int i=0;i<n;i+=k){
            string g=s.substr(i,k);
            while((int)g.size()<k)g+=fill;
            res.push_back(g);
        }
        return res;
    }
};
int main(){
    Solution sol;
    vector<string> res=sol.divideString("abcdefghi",3,'x');
    for(auto&g:res)cout<<g<<" ";
    cout<<endl;
}
