#include<iostream>
#include<vector>
#include<string>
#include<unordered_set>
#include<sstream>
using namespace std;
class Solution{public:
string replaceWords(vector<string>&dict,string sentence){
unordered_set<string>roots(dict.begin(),dict.end());
stringstream ss(sentence);
string word,res;
bool first=true;
while(ss>>word){
string chosen=word;
for(int i=1;i<=(int)word.size();i++){
string pre=word.substr(0,i);
if(roots.count(pre)){chosen=pre;break;}
}
if(!first)res+=" ";
res+=chosen;
first=false;
}
return res;
}
};
int main(){
Solution sol;
vector<string>dict={"cat","bat","rat"};
cout<<sol.replaceWords(dict,"the cattle was rattled by the battery")<<endl;
}
