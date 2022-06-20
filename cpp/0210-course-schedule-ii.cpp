#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class Solution{
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites){
        vector<vector<int>> adj(numCourses);
        vector<int> indeg(numCourses,0);
        for(auto&p:prerequisites){
            adj[p[1]].push_back(p[0]);
            indeg[p[0]]++;
        }
        queue<int> q;
        for(int i=0;i<numCourses;i++)if(indeg[i]==0)q.push(i);
        vector<int> res;
        while(!q.empty()){
            int u=q.front();q.pop();
            res.push_back(u);
            for(int v:adj[u]){
                if(--indeg[v]==0)q.push(v);
            }
        }
        if(res.size()!=numCourses)return {};
        return res;
    }
};
int main(){
    vector<vector<int>> prereq={{1,0},{2,0},{3,1},{3,2}};
    Solution sol;
    auto res=sol.findOrder(4,prereq);
    for(int i=0;i<res.size();i++)cout<<res[i]<<(i+1<res.size()?",":"");
    cout<<endl;
}
