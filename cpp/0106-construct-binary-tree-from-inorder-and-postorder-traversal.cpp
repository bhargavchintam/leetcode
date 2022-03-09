#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
struct TreeNode{int val;TreeNode*left;TreeNode*right;TreeNode(int x):val(x),left(nullptr),right(nullptr){}};
class Solution{
public:
    unordered_map<int,int> idx;
    vector<int> post;
    int pi;
    TreeNode* build(int l,int r){
        if(l>r)return nullptr;
        int val=post[pi--];
        TreeNode*node=new TreeNode(val);
        int m=idx[val];
        node->right=build(m+1,r);
        node->left=build(l,m-1);
        return node;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder){
        post=postorder;
        pi=postorder.size()-1;
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
    vector<int> inorder={9,3,15,20,7};
    vector<int> postorder={9,15,7,20,3};
    Solution sol;
    TreeNode*root=sol.buildTree(inorder,postorder);
    printPre(root);
    cout<<endl;
}
