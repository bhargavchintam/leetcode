#include<iostream>
using namespace std;
struct TreeNode{
int val;
TreeNode*left;
TreeNode*right;
TreeNode(int x):val(x),left(nullptr),right(nullptr){}
};
class Solution{public:
TreeNode* searchBST(TreeNode*root,int val){
if(!root||root->val==val)return root;
return val<root->val?searchBST(root->left,val):searchBST(root->right,val);
}
};
void preorder(TreeNode*node){
if(!node)return;
cout<<node->val<<" ";
preorder(node->left);
preorder(node->right);
}
int main(){
TreeNode*root=new TreeNode(4);
root->left=new TreeNode(2);
root->right=new TreeNode(7);
root->left->left=new TreeNode(1);
root->left->right=new TreeNode(3);
Solution sol;
TreeNode*res=sol.searchBST(root,2);
preorder(res);
cout<<endl;
}
