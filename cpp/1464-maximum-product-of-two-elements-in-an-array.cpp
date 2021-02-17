#include <iostream>
#include <vector>
using namespace std;
class Solution{
public:
    int maxProduct(vector<int>& nums){
        int a=-1,b=-1;
        for(int x:nums){
            if(x>a){b=a;a=x;}
            else if(x>b)b=x;
        }
        return (a-1)*(b-1);
    }
};
int main(){
    vector<int> n={3,4,5,2};
    Solution s;
    cout<<s.maxProduct(n)<<endl;
}
