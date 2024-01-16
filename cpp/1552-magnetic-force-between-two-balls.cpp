#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution{
public:
    bool canPlace(vector<int>& pos,int m,int mid){
        int cnt=1,last=pos[0];
        for(int i=1;i<(int)pos.size();i++){
            if(pos[i]-last>=mid){cnt++;last=pos[i];}
        }
        return cnt>=m;
    }
    int maxDistance(vector<int>& position,int m){
        sort(position.begin(),position.end());
        int lo=1,hi=position.back()-position.front();
        while(lo<hi){
            int mid=lo+(hi-lo+1)/2;
            if(canPlace(position,m,mid))lo=mid;
            else hi=mid-1;
        }
        return lo;
    }
};
int main(){
    vector<int> p={1,2,3,4,7};
    Solution s;
    cout<<s.maxDistance(p,3)<<endl;
}
