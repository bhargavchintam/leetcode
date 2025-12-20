#include <iostream>
using namespace std;
struct TreeNode{int val;TreeNode*left;TreeNode*right;TreeNode(int x):val(x),left(nullptr),right(nullptr){}};
class Solution{
public:
    bool isMirror(TreeNode*a,TreeNode*b){
        if(!a&&!b)return true;
        if(!a||!b)return false;
        return a->val==b->val&&isMirror(a->left,b->right)&&isMirror(a->right,b->left);
    }
    bool isSymmetric(TreeNode*root){
        if(!root)return true;
        return isMirror(root->left,root->right);
    }
};
int main(){
    TreeNode*root=new TreeNode(1);
    root->left=new TreeNode(2);
    root->right=new TreeNode(2);
    root->left->left=new TreeNode(3);
    root->left->right=new TreeNode(4);
    root->right->left=new TreeNode(4);
    root->right->right=new TreeNode(3);
    Solution sol;
    cout<<(sol.isSymmetric(root)?"true":"false")<<endl;
}
