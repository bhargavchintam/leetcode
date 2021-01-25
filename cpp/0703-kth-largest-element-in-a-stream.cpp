#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class KthLargest{public:
priority_queue<int,vector<int>,greater<int>>pq;
int k;
KthLargest(int k,vector<int>nums):k(k){
for(int x:nums)add(x);
}
int add(int val){
pq.push(val);
if((int)pq.size()>k)pq.pop();
return pq.top();
}
};
int main(){
vector<int>nums={4,5,8,2};
KthLargest kl(3,nums);
cout<<kl.add(3)<<endl;
cout<<kl.add(5)<<endl;
}
