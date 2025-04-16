#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
class Solution{
public:
    string makeGood(string s){
        string st;
        for(char c:s){
            if(!st.empty()&&abs(st.back()-c)==32)st.pop_back();
            else st+=c;
        }
        return st;
    }
};
int main(){
    Solution s;
    cout<<s.makeGood("leEeetcode")<<endl;
}
