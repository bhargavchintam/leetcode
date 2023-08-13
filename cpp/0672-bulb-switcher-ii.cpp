#include<iostream>
using namespace std;
class Solution{public:
int flipLights(int n,int presses){
n=min(n,3);
if(presses==0)return 1;
if(n==1)return 2;
if(presses==1)return n==2?3:4;
if(presses==2)return n==2?4:7;
return n==2?4:8;
}
};
int main(){
Solution sol;
cout<<sol.flipLights(1,1)<<endl;
cout<<sol.flipLights(3,1)<<endl;
}
