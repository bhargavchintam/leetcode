#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution{public:
int calPoints(vector<string>&ops){
vector<int>st;
for(auto&op:ops){
if(op=="+")st.push_back(st[st.size()-1]+st[st.size()-2]);
else if(op=="D")st.push_back(st.back()*2);
else if(op=="C")st.pop_back();
else st.push_back(stoi(op));
}
int sum=0;
for(int x:st)sum+=x;
return sum;
}
};
int main(){
Solution sol;
vector<string>ops={"5","2","C","D","+"};
cout<<sol.calPoints(ops)<<endl;
}
