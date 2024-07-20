#include <iostream>
#include <vector>
using namespace std;
class Solution{
public:
    int sumOddLengthSubarrays(vector<int>& arr){
        int n=arr.size(),res=0;
        for(int i=0;i<n;i++){
            int cnt=((i+1)*(n-i)+1)/2;
            res+=cnt*arr[i];
        }
        return res;
    }
};
int main(){
    vector<int> a={1,4,2,5,3};
    Solution s;
    cout<<s.sumOddLengthSubarrays(a)<<endl;
}
