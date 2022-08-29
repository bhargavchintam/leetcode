#include<iostream>
#include<string>
using namespace std;
class Solution{public:
int countSubstrings(string s){
int n=s.size(),res=0;
for(int c=0;c<2*n-1;c++){
int l=c/2,r=l+c%2;
while(l>=0&&r<n&&s[l]==s[r]){res++;l--;r++;}
}
return res;
}
};
int main(){
Solution sol;
cout<<sol.countSubstrings("abc")<<endl;
cout<<sol.countSubstrings("aaa")<<endl;
}
