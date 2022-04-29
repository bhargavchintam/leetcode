#include<iostream>
using namespace std;
struct TreeNode{
int val;
TreeNode*left;
TreeNode*right;
TreeNode(int x):val(x),left(nullptr),right(nullptr){}
};
class Solution{public:
TreeNode* insertIntoBST(TreeNode*root,int val){
if(!root)return new TreeNode(val);
if(val<root->val)root->left=insertIntoBST(root->left,val);
else root->right=insertIntoBST(root->right,val);
return root;
}
};
void inorder(TreeNode*node){
if(!node)return;
inorder(node->left);
cout<<node->val<<" ";
inorder(node->right);
}
int main(){
TreeNode*root=new TreeNode(4);
root->left=new TreeNode(2);
root->right=new TreeNode(7);
root->left->left=new TreeNode(1);
root->left->right=new TreeNode(3);
Solution sol;
TreeNode*res=sol.insertIntoBST(root,5);
inorder(res);
cout<<endl;
}
