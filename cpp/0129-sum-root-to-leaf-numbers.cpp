#include <iostream>
using namespace std;
struct TreeNode{int val;TreeNode*left;TreeNode*right;TreeNode(int x):val(x),left(nullptr),right(nullptr){}};
class Solution{
public:
    int dfs(TreeNode*root,int cur){
        if(!root)return 0;
        cur=cur*10+root->val;
        if(!root->left&&!root->right)return cur;
        return dfs(root->left,cur)+dfs(root->right,cur);
    }
    int sumNumbers(TreeNode*root){
        return dfs(root,0);
    }
};
int main(){
    TreeNode*root=new TreeNode(4);
    root->left=new TreeNode(9);
    root->right=new TreeNode(0);
    root->left->left=new TreeNode(5);
    root->left->right=new TreeNode(1);
    Solution sol;
    cout<<sol.sumNumbers(root)<<endl;
}
