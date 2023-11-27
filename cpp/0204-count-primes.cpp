#include <iostream>
#include <vector>
using namespace std;
class Solution{
public:
    int countPrimes(int n){
        if(n<3)return 0;
        vector<bool> comp(n,false);
        int cnt=0;
        for(int i=2;i<n;i++){
            if(!comp[i]){
                cnt++;
                for(long j=(long)i*i;j<n;j+=i)comp[j]=true;
            }
        }
        return cnt;
    }
};
int main(){
    Solution sol;
    cout<<sol.countPrimes(10)<<endl;
}
