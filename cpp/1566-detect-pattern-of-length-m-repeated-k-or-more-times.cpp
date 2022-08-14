#include <iostream>
#include <vector>
using namespace std;
class Solution{
public:
    bool containsPattern(vector<int>& arr,int m,int k){
        int n=arr.size();
        for(int i=0;i+m*k<=n;i++){
            bool ok=true;
            for(int j=0;j<m*k;j++){
                if(arr[i+j]!=arr[i+j%m]){ok=false;break;}
            }
            if(ok)return true;
        }
        return false;
    }
};
int main(){
    vector<int> a={1,2,4,4,4,4};
    Solution s;
    cout<<(s.containsPattern(a,1,3)?"true":"false")<<endl;
}
