#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution{
public:
    vector<string> stringMatching(vector<string>& words){
        vector<string> res;
        for(int i=0;i<(int)words.size();i++){
            for(int j=0;j<(int)words.size();j++){
                if(i!=j&&words[j].find(words[i])!=string::npos){
                    res.push_back(words[i]);
                    break;
                }
            }
        }
        return res;
    }
};
int main(){
    vector<string> w={"mass","as","hero","superhero"};
    Solution s;
    auto r=s.stringMatching(w);
    for(auto&x:r)cout<<x<<" ";
    cout<<endl;
}
