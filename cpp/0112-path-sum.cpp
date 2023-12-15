#include <iostream>
using namespace std;
struct TreeNode{int val;TreeNode*left;TreeNode*right;TreeNode(int x):val(x),left(nullptr),right(nullptr){}};
class Solution{
public:
    bool hasPathSum(TreeNode*root,int targetSum){
        if(!root)return false;
        if(!root->left&&!root->right)return root->val==targetSum;
        int rem=targetSum-root->val;
        return hasPathSum(root->left,rem)||hasPathSum(root->right,rem);
    }
};
int main(){
    TreeNode*root=new TreeNode(5);
    root->left=new TreeNode(4);
    root->right=new TreeNode(8);
    root->left->left=new TreeNode(11);
    root->left->left->left=new TreeNode(7);
    root->left->left->right=new TreeNode(2);
    root->right->left=new TreeNode(13);
    root->right->right=new TreeNode(4);
    root->right->right->right=new TreeNode(1);
    Solution sol;
    cout<<(sol.hasPathSum(root,22)?"true":"false")<<endl;
}
