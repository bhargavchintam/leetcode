#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
using namespace std;
class Solution{
public:
    string destCity(vector<vector<string>>& paths){
        unordered_set<string> srcs;
        for(auto&p:paths)srcs.insert(p[0]);
        for(auto&p:paths)if(!srcs.count(p[1]))return p[1];
        return "";
    }
};
int main(){
    vector<vector<string>> p={{"London","New York"},{"New York","Lima"},{"Lima","Sao Paulo"}};
    Solution s;
    cout<<s.destCity(p)<<endl;
}
