#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
class Solution{
public:
    string reverseWords(string s){
        stringstream ss(s);
        vector<string> words;
        string w;
        while(ss>>w)words.push_back(w);
        string res;
        for(int i=words.size()-1;i>=0;i--){
            res+=words[i];
            if(i>0)res+=" ";
        }
        return res;
    }
};
int main(){
    Solution sol;
    cout<<sol.reverseWords("the sky is blue")<<endl;
}
