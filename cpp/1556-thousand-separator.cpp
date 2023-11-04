#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class Solution{
public:
    string thousandSeparator(int n){
        string s=to_string(n);
        string res;
        int cnt=0;
        for(int i=(int)s.size()-1;i>=0;i--){
            res+=s[i];
            cnt++;
            if(cnt%3==0&&i!=0)res+='.';
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
int main(){
    Solution s;
    cout<<s.thousandSeparator(1234)<<endl;
}
