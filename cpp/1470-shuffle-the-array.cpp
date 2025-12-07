#include <iostream>
#include <vector>
using namespace std;
class Solution{
public:
    vector<int> shuffle(vector<int>& nums,int n){
        vector<int> res(2*n);
        for(int i=0;i<n;i++){
            res[2*i]=nums[i];
            res[2*i+1]=nums[i+n];
        }
        return res;
    }
};
int main(){
    vector<int> n={2,5,1,3,4,7};
    Solution s;
    auto r=s.shuffle(n,3);
    for(int x:r)cout<<x<<" ";
    cout<<endl;
}
