#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
class Solution{
public:
    int mostWordsFound(vector<string>& sentences){
        int res=0;
        for(auto&s:sentences){
            int cnt=1;
            for(char c:s)if(c==' ')cnt++;
            res=max(res,cnt);
        }
        return res;
    }
};
int main(){
    Solution sol;
    vector<string> sentences={"alice and bob love leetcode","i think so too","this is great thanks very much"};
    cout<<sol.mostWordsFound(sentences)<<endl;
}
