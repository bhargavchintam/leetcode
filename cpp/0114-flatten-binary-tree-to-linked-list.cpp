#include <iostream>
using namespace std;
struct TreeNode{int val;TreeNode*left;TreeNode*right;TreeNode(int x):val(x),left(nullptr),right(nullptr){}};
class Solution{
public:
    TreeNode* prev=nullptr;
    void flatten(TreeNode*root){
        if(!root)return;
        flatten(root->right);
        flatten(root->left);
        root->right=prev;
        root->left=nullptr;
        prev=root;
    }
};
int main(){
    TreeNode*root=new TreeNode(1);
    root->left=new TreeNode(2);
    root->right=new TreeNode(5);
    root->left->left=new TreeNode(3);
    root->left->right=new TreeNode(4);
    root->right->right=new TreeNode(6);
    Solution sol;
    sol.flatten(root);
    TreeNode*cur=root;
    while(cur){
        cout<<cur->val<<(cur->right?",":"");
        cur=cur->right;
    }
    cout<<endl;
}
