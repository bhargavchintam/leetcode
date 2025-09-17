#include<iostream>
#include<functional>
using namespace std;
struct TreeNode{
int val;
TreeNode*left;
TreeNode*right;
TreeNode(int x):val(x),left(nullptr),right(nullptr){}
};
class Solution{public:
int findSecondMinimumValue(TreeNode*root){
if(!root)return -1;
long res=-1;
long rootVal=root->val;
function<void(TreeNode*)> dfs=[&](TreeNode*node){
if(!node)return;
if(node->val!=rootVal){
if(res==-1)res=node->val;
else res=min(res,(long)node->val);
return;
}
dfs(node->left);
dfs(node->right);
};
dfs(root);
return (int)res;
}
};
int main(){
TreeNode*root=new TreeNode(2);
root->left=new TreeNode(2);
root->right=new TreeNode(5);
root->right->left=new TreeNode(5);
root->right->right=new TreeNode(7);
Solution sol;
cout<<sol.findSecondMinimumValue(root)<<endl;
}
