#include <iostream>
#include <vector>
using namespace std;
class Solution{
public:
    int findKthPositive(vector<int>& arr,int k){
        int lo=0,hi=arr.size();
        while(lo<hi){
            int mid=(lo+hi)/2;
            if(arr[mid]-mid-1<k)lo=mid+1;
            else hi=mid;
        }
        return lo+k;
    }
};
int main(){
    vector<int> a={2,3,4,7,11};
    Solution s;
    cout<<s.findKthPositive(a,5)<<endl;
}
