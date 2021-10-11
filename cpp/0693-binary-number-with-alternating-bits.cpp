#include<iostream>
using namespace std;
class Solution{public:
bool hasAlternatingBits(int n){
int prev=-1;
while(n){
int b=n&1;
if(b==prev)return false;
prev=b;
n>>=1;
}
return true;
}
};
int main(){
Solution sol;
cout<<boolalpha<<sol.hasAlternatingBits(5)<<endl;
cout<<boolalpha<<sol.hasAlternatingBits(7)<<endl;
}
