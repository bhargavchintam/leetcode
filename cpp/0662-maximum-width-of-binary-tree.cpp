#include<iostream>
#include<queue>
using namespace std;
struct TreeNode{
int val;
TreeNode*left;
TreeNode*right;
TreeNode(int x):val(x),left(nullptr),right(nullptr){}
};
class Solution{public:
int widthOfBinaryTree(TreeNode*root){
if(!root)return 0;
long long res=0;
queue<pair<TreeNode*,long long>>q;
q.push({root,0});
while(!q.empty()){
int sz=q.size();
long long l=q.front().second,r=l;
for(int i=0;i<sz;i++){
auto pr=q.front();q.pop();
TreeNode*node=pr.first;
long long idx=pr.second;
r=idx;
if(node->left)q.push({node->left,idx*2});
if(node->right)q.push({node->right,idx*2+1});
}
res=max(res,r-l+1);
}
return (int)res;
}
};
int main(){
TreeNode*root=new TreeNode(1);
root->left=new TreeNode(3);
root->right=new TreeNode(2);
root->left->left=new TreeNode(5);
root->left->right=new TreeNode(3);
root->right->right=new TreeNode(9);
Solution sol;
cout<<sol.widthOfBinaryTree(root)<<endl;
}
