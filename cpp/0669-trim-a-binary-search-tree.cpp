#include<iostream>
using namespace std;
struct TreeNode{
int val;
TreeNode*left;
TreeNode*right;
TreeNode(int x):val(x),left(nullptr),right(nullptr){}
};
class Solution{public:
TreeNode* trimBST(TreeNode*root,int lo,int hi){
if(!root)return nullptr;
if(root->val<lo)return trimBST(root->right,lo,hi);
if(root->val>hi)return trimBST(root->left,lo,hi);
root->left=trimBST(root->left,lo,hi);
root->right=trimBST(root->right,lo,hi);
return root;
}
};
void preorder(TreeNode*node){
if(!node)return;
cout<<node->val<<" ";
preorder(node->left);
preorder(node->right);
}
int main(){
TreeNode*root=new TreeNode(1);
root->left=new TreeNode(0);
root->right=new TreeNode(2);
Solution sol;
TreeNode*res=sol.trimBST(root,1,2);
preorder(res);
cout<<endl;
}
