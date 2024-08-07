#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
class Solution{
public:
    bool hasAllCodes(string s,int k){
        unordered_set<string> seen;
        for(int i=0;i+k<=(int)s.size();i++)seen.insert(s.substr(i,k));
        return (int)seen.size()==(1<<k);
    }
};
int main(){
    Solution s;
    cout<<(s.hasAllCodes("00110110",2)?"true":"false")<<endl;
}
