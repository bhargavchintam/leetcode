#include<iostream>
#include<vector>
using namespace std;
struct TreeNode{
int val;
TreeNode*left;
TreeNode*right;
TreeNode(int x):val(x),left(nullptr),right(nullptr){}
};
class Solution{public:
TreeNode* build(vector<int>&nums,int l,int r){
if(l>r)return nullptr;
int mi=l;
for(int i=l;i<=r;i++)if(nums[i]>nums[mi])mi=i;
TreeNode*node=new TreeNode(nums[mi]);
node->left=build(nums,l,mi-1);
node->right=build(nums,mi+1,r);
return node;
}
TreeNode* constructMaximumBinaryTree(vector<int>&nums){
return build(nums,0,nums.size()-1);
}
};
void preorder(TreeNode*node){
if(!node)return;
cout<<node->val<<" ";
preorder(node->left);
preorder(node->right);
}
int main(){
Solution sol;
vector<int>nums={3,2,1,6,0,5};
TreeNode*root=sol.constructMaximumBinaryTree(nums);
preorder(root);
cout<<endl;
}
