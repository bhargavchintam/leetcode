#include<iostream>
#include<vector>
using namespace std;
class Solution{public:
vector<int> findClosestElements(vector<int>&arr,int k,int x){
int lo=0,hi=arr.size()-k;
while(lo<hi){
int mid=lo+(hi-lo)/2;
if(x-arr[mid]>arr[mid+k]-x)lo=mid+1;
else hi=mid;
}
return vector<int>(arr.begin()+lo,arr.begin()+lo+k);
}
};
int main(){
Solution sol;
vector<int>arr={1,2,3,4,5};
auto res=sol.findClosestElements(arr,4,3);
for(int x:res)cout<<x<<" ";
cout<<endl;
}
