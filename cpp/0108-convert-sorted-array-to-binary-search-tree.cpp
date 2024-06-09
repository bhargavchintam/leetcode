#include <iostream>
#include <vector>
using namespace std;
struct TreeNode{int val;TreeNode*left;TreeNode*right;TreeNode(int x):val(x),left(nullptr),right(nullptr){}};
class Solution{
public:
    TreeNode* build(vector<int>& nums,int l,int r){
        if(l>r)return nullptr;
        int m=(l+r)/2;
        TreeNode*node=new TreeNode(nums[m]);
        node->left=build(nums,l,m-1);
        node->right=build(nums,m+1,r);
        return node;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums){
        return build(nums,0,nums.size()-1);
    }
};
void printIn(TreeNode*root){
    if(!root)return;
    printIn(root->left);
    cout<<root->val<<" ";
    printIn(root->right);
}
int main(){
    vector<int> nums={-10,-3,0,5,9};
    Solution sol;
    TreeNode*root=sol.sortedArrayToBST(nums);
    printIn(root);
    cout<<endl;
}
