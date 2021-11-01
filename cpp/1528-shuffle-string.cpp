#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution{
public:
    string restoreString(string s,vector<int>& indices){
        string res(s.size(),' ');
        for(int i=0;i<(int)s.size();i++)res[indices[i]]=s[i];
        return res;
    }
};
int main(){
    vector<int> idx={4,5,6,7,0,2,1,3};
    Solution s;
    cout<<s.restoreString("codeleet",idx)<<endl;
}
