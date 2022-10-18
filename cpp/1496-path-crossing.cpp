#include <iostream>
#include <string>
#include <set>
#include <utility>
using namespace std;
class Solution{
public:
    bool isPathCrossing(string path){
        set<pair<int,int>> seen;
        int x=0,y=0;
        seen.insert({0,0});
        for(char c:path){
            if(c=='N')y++;
            else if(c=='S')y--;
            else if(c=='E')x++;
            else x--;
            if(seen.count({x,y}))return true;
            seen.insert({x,y});
        }
        return false;
    }
};
int main(){
    Solution s;
    cout<<(s.isPathCrossing("NES")?"true":"false")<<endl;
    cout<<(s.isPathCrossing("NESWW")?"true":"false")<<endl;
}
