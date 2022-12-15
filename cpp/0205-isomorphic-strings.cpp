#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
class Solution{
public:
    bool isIsomorphic(string s,string t){
        if(s.size()!=t.size())return false;
        unordered_map<char,char> m1,m2;
        for(int i=0;i<s.size();i++){
            char a=s[i],b=t[i];
            if(m1.count(a)&&m1[a]!=b)return false;
            if(m2.count(b)&&m2[b]!=a)return false;
            m1[a]=b;
            m2[b]=a;
        }
        return true;
    }
};
int main(){
    Solution sol;
    cout<<(sol.isIsomorphic("egg","add")?"true":"false")<<endl;
}
