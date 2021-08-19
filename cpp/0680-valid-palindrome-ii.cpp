#include<iostream>
#include<string>
using namespace std;
class Solution{public:
bool isPal(string&s,int l,int r){
while(l<r){
if(s[l]!=s[r])return false;
l++;r--;
}
return true;
}
bool validPalindrome(string s){
int l=0,r=s.size()-1;
while(l<r){
if(s[l]!=s[r])return isPal(s,l+1,r)||isPal(s,l,r-1);
l++;r--;
}
return true;
}
};
int main(){
Solution sol;
cout<<boolalpha<<sol.validPalindrome("abca")<<endl;
}
