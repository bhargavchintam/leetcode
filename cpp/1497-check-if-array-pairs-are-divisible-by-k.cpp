#include <iostream>
#include <vector>
using namespace std;
class Solution{
public:
    bool canArrange(vector<int>& arr,int k){
        vector<int> cnt(k,0);
        for(int x:arr){
            int r=((x%k)+k)%k;
            cnt[r]++;
        }
        if(cnt[0]%2!=0)return false;
        for(int r=1;r*2<=k;r++){
            if(r*2==k){
                if(cnt[r]%2!=0)return false;
            }else if(cnt[r]!=cnt[k-r])return false;
        }
        return true;
    }
};
int main(){
    vector<int> a={1,2,3,4,5,10,6,7,8,9};
    Solution s;
    cout<<(s.canArrange(a,5)?"true":"false")<<endl;
}
