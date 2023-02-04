#include<iostream>
#include<vector>
#include<string>
#include<unordered_set>
using namespace std;
class MagicDictionary{public:
unordered_set<string>words;
MagicDictionary(){}
void buildDict(vector<string>dict){
for(auto&w:dict)words.insert(w);
}
bool search(string word){
for(int i=0;i<(int)word.size();i++){
char orig=word[i];
for(char c='a';c<='z';c++){
if(c==orig)continue;
word[i]=c;
if(words.count(word))return true;
}
word[i]=orig;
}
return false;
}
};
int main(){
MagicDictionary md;
vector<string>dict={"hello","leetcode"};
md.buildDict(dict);
cout<<boolalpha<<md.search("hhllo")<<endl;
cout<<boolalpha<<md.search("hello")<<endl;
}
