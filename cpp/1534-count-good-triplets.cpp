#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
class Solution{
public:
    int countGoodTriplets(vector<int>& arr,int a,int b,int c){
        int n=arr.size(),res=0;
        for(int i=0;i<n;i++)
            for(int j=i+1;j<n;j++)
                for(int k=j+1;k<n;k++)
                    if(abs(arr[i]-arr[j])<=a&&abs(arr[j]-arr[k])<=b&&abs(arr[i]-arr[k])<=c)
                        res++;
        return res;
    }
};
int main(){
    vector<int> a2={3,0,1,1,9,7};
    Solution s;
    cout<<s.countGoodTriplets(a2,7,2,3)<<endl;
}
