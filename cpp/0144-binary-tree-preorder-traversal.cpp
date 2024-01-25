#include <iostream>
#include <vector>
using namespace std;
struct TreeNode{int val;TreeNode*left;TreeNode*right;TreeNode(int x):val(x),left(nullptr),right(nullptr){}};
class Solution{
public:
    void dfs(TreeNode*root,vector<int>&res){
        if(!root)return;
        res.push_back(root->val);
        dfs(root->left,res);
        dfs(root->right,res);
    }
    vector<int> preorderTraversal(TreeNode*root){
        vector<int> res;
        dfs(root,res);
        return res;
    }
};
int main(){
    TreeNode*root=new TreeNode(1);
    root->right=new TreeNode(2);
    root->right->left=new TreeNode(3);
    Solution sol;
    auto res=sol.preorderTraversal(root);
    for(int i=0;i<res.size();i++)cout<<res[i]<<(i+1<res.size()?",":"");
    cout<<endl;
}
