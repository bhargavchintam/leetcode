#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
class Solution{
public:
    string largestNumber(vector<int>& nums){
        vector<string> s;
        for(int x:nums)s.push_back(to_string(x));
        sort(s.begin(),s.end(),[](const string&a,const string&b){
            return a+b>b+a;
        });
        if(s[0]=="0")return "0";
        string res;
        for(string&x:s)res+=x;
        return res;
    }
};
int main(){
    vector<int> nums={3,30,34,5,9};
    Solution sol;
    cout<<sol.largestNumber(nums)<<endl;
}
