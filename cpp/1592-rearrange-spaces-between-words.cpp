#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;
class Solution{
public:
    string reorderSpaces(string text){
        int spaces=0;
        for(char c:text)if(c==' ')spaces++;
        stringstream ss(text);
        string w;
        vector<string> words;
        while(ss>>w)words.push_back(w);
        if(words.size()==1)return words[0]+string(spaces,' ');
        int gap=spaces/((int)words.size()-1);
        int extra=spaces%((int)words.size()-1);
        string res;
        for(int i=0;i<(int)words.size();i++){
            res+=words[i];
            if(i!=(int)words.size()-1)res+=string(gap,' ');
        }
        res+=string(extra,' ');
        return res;
    }
};
int main(){
    Solution s;
    cout<<"["<<s.reorderSpaces("  this   is  a sentence ")<<"]"<<endl;
}
