#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
struct TreeNode{int val;TreeNode*left;TreeNode*right;TreeNode(int x):val(x),left(nullptr),right(nullptr){}};
class Solution{
public:
    unordered_map<int,int> idx;
    vector<int> pre;
    int pi=0;
    TreeNode* build(int l,int r){
        if(l>r)return nullptr;
        int val=pre[pi++];
        TreeNode*node=new TreeNode(val);
        int m=idx[val];
        node->left=build(l,m-1);
        node->right=build(m+1,r);
        return node;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder){
        pre=preorder;
        for(int i=0;i<inorder.size();i++)idx[inorder[i]]=i;
        return build(0,inorder.size()-1);
    }
};
void printPre(TreeNode*root){
    if(!root)return;
    cout<<root->val<<" ";
    printPre(root->left);
    printPre(root->right);
}
int main(){
    vector<int> preorder={3,9,20,15,7};
    vector<int> inorder={9,3,15,20,7};
    Solution sol;
    TreeNode*root=sol.buildTree(preorder,inorder);
    printPre(root);
    cout<<endl;
}
