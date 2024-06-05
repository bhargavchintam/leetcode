#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class Solution{
public:
    int maxPower(string s){
        int best=1,cur=1;
        for(int i=1;i<(int)s.size();i++){
            if(s[i]==s[i-1])cur++;
            else cur=1;
            best=max(best,cur);
        }
        return best;
    }
};
int main(){
    Solution s;
    cout<<s.maxPower("leetcode")<<endl;
}
