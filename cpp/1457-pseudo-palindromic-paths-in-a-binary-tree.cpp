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
    void dfs(TreeNode*node,int mask){
        if(!node)return;
        mask^=(1<<node->val);
        if(!node->left&&!node->right){
            if((mask&(mask-1))==0)res++;
        }
        dfs(node->left,mask);
        dfs(node->right,mask);
    }
    int pseudoPalindromicPaths(TreeNode*root){
        dfs(root,0);
        return res;
    }
};
int main(){
    TreeNode*root=new TreeNode(2);
    root->left=new TreeNode(3);
    root->right=new TreeNode(1);
    root->left->left=new TreeNode(3);
    root->left->right=new TreeNode(1);
    root->right->right=new TreeNode(1);
    Solution s;
    cout<<s.pseudoPalindromicPaths(root)<<endl;
}
