#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
class Solution{public:
int findLongestChain(vector<vector<int>>&pairs){
sort(pairs.begin(),pairs.end(),[](vector<int>&a,vector<int>&b){return a[1]<b[1];});
int cnt=0;
int cur=INT_MIN;
for(auto&p:pairs){
if(p[0]>cur){cnt++;cur=p[1];}
}
return cnt;
}
};
int main(){
Solution sol;
vector<vector<int>>pairs={{1,2},{2,3},{3,4}};
cout<<sol.findLongestChain(pairs)<<endl;
}
