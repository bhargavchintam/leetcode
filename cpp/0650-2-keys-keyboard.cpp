#include<iostream>
using namespace std;
class Solution{public:
int minSteps(int n){
int res=0;
for(int p=2;p<=n;p++){
while(n%p==0){res+=p;n/=p;}
}
return res;
}
};
int main(){
Solution sol;
cout<<sol.minSteps(3)<<endl;
cout<<sol.minSteps(1)<<endl;
}
