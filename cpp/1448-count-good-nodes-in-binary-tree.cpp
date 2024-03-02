#include <iostream>
using namespace std;
struct TreeNode{
    int val;
    TreeNode*left;
    TreeNode*right;
    TreeNode(int x):val(x),left(nullptr),right(nullptr){}
};
class Solution{
public:
    int res=0;
    void dfs(TreeNode*node,int mx){
        if(!node)return;
        if(node->val>=mx){res++;mx=node->val;}
        dfs(node->left,mx);
        dfs(node->right,mx);
    }
    int goodNodes(TreeNode*root){
        dfs(root,root->val);
        return res;
    }
};
int main(){
    TreeNode*root=new TreeNode(3);
    root->left=new TreeNode(1);
    root->right=new TreeNode(4);
    root->left->left=new TreeNode(3);
    root->right->left=new TreeNode(1);
    root->right->right=new TreeNode(5);
    Solution s;
    cout<<s.goodNodes(root)<<endl;
}
