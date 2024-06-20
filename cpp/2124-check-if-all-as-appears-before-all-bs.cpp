#include <iostream>
#include <string>
using namespace std;
class Solution{
public:
    bool checkString(string s){
        bool seenB=false;
        for(char c:s){
            if(c=='b')seenB=true;
            else if(seenB)return false;
        }
        return true;
    }
};
int main(){
    Solution sol;
    cout<<(sol.checkString("aaabbb")?"true":"false")<<endl;
}
