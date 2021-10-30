#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
using namespace std;
class Solution{
public:
    string reformat(string s){
        string digits,letters;
        for(char c:s){
            if(isdigit(c))digits+=c;
            else letters+=c;
        }
        if(abs((int)digits.size()-(int)letters.size())>1)return "";
        string a=digits,b=letters;
        if(b.size()>a.size())swap(a,b);
        string res;
        for(int i=0;i<(int)b.size();i++){
            res+=a[i];
            res+=b[i];
        }
        if(a.size()>b.size())res+=a.back();
        return res;
    }
};
int main(){
    Solution s;
    cout<<s.reformat("a0b1c2")<<endl;
    cout<<s.reformat("leetcode")<<endl;
}
