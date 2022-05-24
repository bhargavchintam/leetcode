#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
class Solution{
public:
    int minOperations(vector<string>& logs){
        int depth=0;
        for(auto&l:logs){
            if(l=="../")depth=max(0,depth-1);
            else if(l=="./")continue;
            else depth++;
        }
        return depth;
    }
};
int main(){
    vector<string> l={"d1/","d2/","../","d21/","./"};
    Solution s;
    cout<<s.minOperations(l)<<endl;
}
