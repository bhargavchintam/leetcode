#include<iostream>
using namespace std;
struct TreeNode{
int val;
TreeNode*left;
TreeNode*right;
TreeNode(int x):val(x),left(nullptr),right(nullptr){}
};
class Solution{public:
int res=0;
int dfs(TreeNode*node){
if(!node)return 0;
int l=dfs(node->left),r=dfs(node->right);
int lp=0,rp=0;
if(node->left&&node->left->val==node->val)lp=l+1;
if(node->right&&node->right->val==node->val)rp=r+1;
res=max(res,lp+rp);
return max(lp,rp);
}
int longestUnivaluePath(TreeNode*root){
dfs(root);
return res;
}
};
int main(){
TreeNode*root=new TreeNode(5);
root->left=new TreeNode(4);
root->right=new TreeNode(5);
root->left->left=new TreeNode(1);
root->left->right=new TreeNode(1);
root->right->right=new TreeNode(5);
Solution sol;
cout<<sol.longestUnivaluePath(root)<<endl;
}
