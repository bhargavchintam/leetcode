#include <iostream>
#include <vector>
using namespace std;
class Solution{
public:
    vector<int> twoSum(vector<int>& numbers,int target){
        int l=0,r=numbers.size()-1;
        while(l<r){
            int sum=numbers[l]+numbers[r];
            if(sum==target)return {l+1,r+1};
            else if(sum<target)l++;
            else r--;
        }
        return {};
    }
};
int main(){
    vector<int> numbers={2,7,11,15};
    Solution sol;
    auto res=sol.twoSum(numbers,9);
    cout<<res[0]<<" "<<res[1]<<endl;
}
