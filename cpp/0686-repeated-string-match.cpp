#include<iostream>
#include<string>
using namespace std;
class Solution{public:
int repeatedStringMatch(string a,string b){
int cnt=1;
string s=a;
while(s.size()<b.size()){s+=a;cnt++;}
if(s.find(b)!=string::npos)return cnt;
s+=a;cnt++;
if(s.find(b)!=string::npos)return cnt;
return -1;
}
};
int main(){
Solution sol;
cout<<sol.repeatedStringMatch("abcd","cdabcdab")<<endl;
}
