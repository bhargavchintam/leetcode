#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class Solution{
public:
    int maxScore(string s){
        int ones=0;
        for(char c:s)if(c=='1')ones++;
        int zeros=0,best=0;
        for(int i=0;i<(int)s.size()-1;i++){
            if(s[i]=='0')zeros++;
            else ones--;
            best=max(best,zeros+ones);
        }
        return best;
    }
};
int main(){
    Solution s;
    cout<<s.maxScore("011101")<<endl;
}
