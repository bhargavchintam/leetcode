#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;
struct TreeNode{int val;TreeNode*left;TreeNode*right;TreeNode(int x):val(x),left(nullptr),right(nullptr){}};
class Solution{
public:
    int height(TreeNode*root){
        if(!root)return 0;
        int lh=height(root->left);
        if(lh==-1)return -1;
        int rh=height(root->right);
        if(rh==-1)return -1;
        if(abs(lh-rh)>1)return -1;
        return 1+max(lh,rh);
    }
    bool isBalanced(TreeNode*root){
        return height(root)!=-1;
    }
};
int main(){
    TreeNode*root=new TreeNode(3);
    root->left=new TreeNode(9);
    root->right=new TreeNode(20);
    root->right->left=new TreeNode(15);
    root->right->right=new TreeNode(7);
    Solution sol;
    cout<<(sol.isBalanced(root)?"true":"false")<<endl;
}
