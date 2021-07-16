#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Node{
public:
    int val;
    vector<Node*> neighbors;
    Node(){val=0;}
    Node(int _val){val=_val;}
};
class Solution{
public:
    unordered_map<Node*,Node*> mp;
    Node* cloneGraph(Node*node){
        if(!node)return nullptr;
        if(mp.count(node))return mp[node];
        Node*clone=new Node(node->val);
        mp[node]=clone;
        for(Node*nb:node->neighbors)
            clone->neighbors.push_back(cloneGraph(nb));
        return clone;
    }
};
int main(){
    vector<Node*> nodes;
    for(int i=1;i<=4;i++)nodes.push_back(new Node(i));
    nodes[0]->neighbors={nodes[1],nodes[3]};
    nodes[1]->neighbors={nodes[0],nodes[2]};
    nodes[2]->neighbors={nodes[1],nodes[3]};
    nodes[3]->neighbors={nodes[0],nodes[2]};
    Solution sol;
    Node*clone=sol.cloneGraph(nodes[0]);
    cout<<clone->val<<" "<<clone->neighbors.size()<<endl;
}
