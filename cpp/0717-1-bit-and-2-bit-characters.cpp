#include<iostream>
#include<vector>
using namespace std;
class Solution{public:
bool isOneBitCharacter(vector<int>&bits){
int i=0,n=bits.size();
while(i<n-1){
i+=bits[i]+1;
}
return i==n-1;
}
};
int main(){
Solution sol;
vector<int>bits={1,0,0};
cout<<boolalpha<<sol.isOneBitCharacter(bits)<<endl;
}
