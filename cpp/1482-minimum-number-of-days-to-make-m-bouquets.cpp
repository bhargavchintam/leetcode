#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution{
public:
    int minDays(vector<int>& bloomDay,int m,int k){
        long need=(long)m*k;
        if(need>(long)bloomDay.size())return -1;
        int lo=1,hi=0;
        for(int x:bloomDay)hi=max(hi,x);
        while(lo<hi){
            int mid=lo+(hi-lo)/2;
            int bouquets=0,cnt=0;
            for(int x:bloomDay){
                if(x<=mid)cnt++;
                else cnt=0;
                if(cnt==k){bouquets++;cnt=0;}
            }
            if(bouquets>=m)hi=mid;
            else lo=mid+1;
        }
        return lo;
    }
};
int main(){
    vector<int> b={1,10,3,10,2};
    Solution s;
    cout<<s.minDays(b,3,1)<<endl;
}
