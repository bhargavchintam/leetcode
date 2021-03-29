#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<algorithm>
using namespace std;
struct TreeNode{
int val;
TreeNode*left;
TreeNode*right;
TreeNode(int x):val(x),left(nullptr),right(nullptr){}
};
class Solution{public:
unordered_map<string,int>cnt;
vector<TreeNode*>res;
string dfs(TreeNode*node){
if(!node)return "#";
string s=to_string(node->val)+","+dfs(node->left)+","+dfs(node->right);
cnt[s]++;
if(cnt[s]==2)res.push_back(node);
return s;
}
vector<TreeNode*> findDuplicateSubtrees(TreeNode*root){
dfs(root);
return res;
}
};
int main(){
TreeNode*n3a=new TreeNode(3);
TreeNode*n3b=new TreeNode(3);
TreeNode*n2a=new TreeNode(2);n2a->left=n3a;
TreeNode*n2b=new TreeNode(2);n2b->left=n3b;
TreeNode*root=new TreeNode(1);root->left=n2a;root->right=n2b;
Solution sol;
auto res=sol.findDuplicateSubtrees(root);
vector<int>vals;
for(auto*node:res)vals.push_back(node->val);
sort(vals.begin(),vals.end());
for(int v:vals)cout<<v<<" ";
cout<<endl;
}
