#include <iostream>
#include <sstream>
#include <string>
using namespace std;
class Solution{
public:
    int isPrefixOfWord(string sentence,string searchWord){
        stringstream ss(sentence);
        string w;
        int idx=1;
        while(ss>>w){
            if(w.substr(0,searchWord.size())==searchWord)return idx;
            idx++;
        }
        return -1;
    }
};
int main(){
    Solution s;
    cout<<s.isPrefixOfWord("i love eating burger","burg")<<endl;
}
