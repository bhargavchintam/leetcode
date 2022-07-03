#include <iostream>
#include <vector>
using namespace std;
class Solution{
public:
    int busyStudent(vector<int>& startTime,vector<int>& endTime,int queryTime){
        int cnt=0;
        for(int i=0;i<(int)startTime.size();i++)
            if(startTime[i]<=queryTime&&queryTime<=endTime[i])cnt++;
        return cnt;
    }
};
int main(){
    vector<int> st={1,2,3},et={3,2,7};
    Solution s;
    cout<<s.busyStudent(st,et,4)<<endl;
}
