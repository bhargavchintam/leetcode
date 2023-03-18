#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution{
public:
    int numberOfBeams(vector<string>& bank){
        long long res=0;
        int prev=0;
        for(auto&row:bank){
            int cnt=0;
            for(char c:row)if(c=='1')cnt++;
            if(cnt==0)continue;
            res+=(long long)prev*cnt;
            prev=cnt;
        }
        return (int)res;
    }
};
int main(){
    Solution sol;
    vector<string> bank={"011001","000000","010100","001000"};
    cout<<sol.numberOfBeams(bank)<<endl;
}
