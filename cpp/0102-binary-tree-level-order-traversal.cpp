#include <iostream>
#include <vector>
#include <queue>
using namespace std;
struct TreeNode{int val;TreeNode*left;TreeNode*right;TreeNode(int x):val(x),left(nullptr),right(nullptr){}};
class Solution{
public:
    vector<vector<int>> levelOrder(TreeNode*root){
        vector<vector<int>> res;
        if(!root)return res;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector<int> level;
            for(int i=0;i<n;i++){
                TreeNode*node=q.front();q.pop();
                level.push_back(node->val);
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
            }
            res.push_back(level);
        }
        return res;
    }
};
int main(){
    TreeNode*root=new TreeNode(3);
    root->left=new TreeNode(9);
    root->right=new TreeNode(20);
    root->right->left=new TreeNode(15);
    root->right->right=new TreeNode(7);
    Solution sol;
    auto res=sol.levelOrder(root);
    for(auto&level:res){
        cout<<"[";
        for(int i=0;i<level.size();i++)cout<<level[i]<<(i+1<level.size()?",":"");
        cout<<"]";
    }
    cout<<endl;
}
