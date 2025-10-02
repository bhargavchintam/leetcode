#include <iostream>
#include <string>
using namespace std;
class Trie{
public:
    Trie* child[26];
    bool isEnd;
    Trie(){
        isEnd=false;
        for(int i=0;i<26;i++)child[i]=nullptr;
    }
    void insert(string word){
        Trie*node=this;
        for(char c:word){
            int i=c-'a';
            if(!node->child[i])node->child[i]=new Trie();
            node=node->child[i];
        }
        node->isEnd=true;
    }
    Trie* find(string word){
        Trie*node=this;
        for(char c:word){
            int i=c-'a';
            if(!node->child[i])return nullptr;
            node=node->child[i];
        }
        return node;
    }
    bool search(string word){
        Trie*node=find(word);
        return node&&node->isEnd;
    }
    bool startsWith(string prefix){
        return find(prefix)!=nullptr;
    }
};
int main(){
    Trie trie;
    trie.insert("apple");
    cout<<(trie.search("apple")?"true":"false")<<" ";
    cout<<(trie.search("app")?"true":"false")<<" ";
    cout<<(trie.startsWith("app")?"true":"false")<<" ";
    trie.insert("app");
    cout<<(trie.search("app")?"true":"false")<<endl;
}
